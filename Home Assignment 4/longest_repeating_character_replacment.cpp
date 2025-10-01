class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int MaxLen = 0;
        
        vector<int> freq(26, 0);
        
        int i = 0, j = 0;
        int maxfreq = 0;

        while (j < n) {

            freq[s[j] - 'A']++;

            maxfreq = max(maxfreq, freq[s[j] - 'A']);

            if ((j - i + 1) - maxfreq > k) {
                freq[s[i] - 'A']--;
                i++;
            }

            if ((j - i + 1) - maxfreq <= k) {
                MaxLen = max(MaxLen, j - i + 1);
            }
            j++;
        }

        return MaxLen;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        unordered_map<char,int> freq;

        int i = 0 , j = 0 ;
        int maxLen = 0;
        
        while(j < n){

            freq[s[j]]++;

            while(i < j && freq[s[j]] > 1){

                freq[s[i]]--;
                i++;
                
            }

            maxLen = max(maxLen,j-i+1);
            j++;
        }

        return maxLen;
    }
};
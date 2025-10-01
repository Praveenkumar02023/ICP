class Solution {
public:
    bool check(unordered_map<char,int> freq , unordered_map<char,int> cur){


        for(auto &[k,v] : freq){

            if(cur[k] != v) return false;

        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();

        unordered_map<char,int> freq , cur;

        for(auto & ch : s1){

            freq[ch]++;

        }

        int i = 0 , j = 0;

        while(j < m){

            cur[s2[j]]++;

            int curLen = (j-i+1);


            if(curLen == n){

                if(check(freq,cur)) return true;
                else{

                    cur[s2[i]]--;
                    i++;

                }
            }

            j++;
        }
        return false;
    }
};
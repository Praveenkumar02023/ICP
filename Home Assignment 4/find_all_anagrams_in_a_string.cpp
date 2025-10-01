class Solution {
public:
    bool check(unordered_map<char,int> freq , unordered_map<char,int> cur){


        for(auto &[k,v] : freq){

            if(cur[k] != v) return false;

        }

        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();

        unordered_map<char,int> freq , cur;
        vector<int> res;
        for(auto & ch :p){

            freq[ch]++;

        }

        int i = 0 , j = 0;

        while(j < n){

            cur[s[j]]++;

            int curLen = (j-i+1);


            if(curLen == m){

                if(check(freq,cur)){

                    res.push_back(i);

                }
               

                    cur[s[i]]--;
                    i++;

                
            }
            j++;
        }
        return res;
    }
};
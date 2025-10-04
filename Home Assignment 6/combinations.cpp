class Solution {
public:
 void getCombinations(int i ,int n , int k, vector<vector<int>>& res,vector<int>& curr){

        if(i == k){

            res.push_back(curr);
            return;

        }

        int j = curr.empty() ? 1 : curr.back() + 1;

        for(; j <= (n - (k-i) + 1) ; j++){

            curr.push_back(j);
            getCombinations(i+1,n,k,res,curr);
            curr.pop_back();
        }

    }

    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> res;

        vector<int> curr;

        getCombinations(0,n,k,res,curr);

        return res;
    }
};
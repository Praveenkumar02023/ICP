class Solution {
public:
    void solve(int i , int n , vector<int>& candidates , int target , vector<vector<int>>& res , vector<int>& cur){

        if(target == 0){

            res.push_back(cur);
            return;

        }

        for(int j = i ; j < n ; j++){

            if(j > i && candidates[j-1] == candidates[j])continue;

            if(target < candidates[j])break;

            cur.push_back(candidates[j]);

            solve(j+1,n,candidates,target-candidates[j],res,cur);

            cur.pop_back();

        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        vector<int> cur;

        
        sort(begin(candidates),end(candidates));

        int n = candidates.size();

        solve(0,n,candidates,target,res,cur);

        return res;
    }
};
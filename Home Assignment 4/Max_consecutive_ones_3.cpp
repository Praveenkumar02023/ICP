class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();

        int ones = 0,zeros = 0;
        int res = 0;
        int i= 0;

        for(int j = 0 ;j < n ;j++){
            
            if(nums[j] == 1)ones++;
            else zeros++;

            while(i < j && zeros > k){
                if(nums[i] == 1)ones--;
                else zeros--;
                i++;
            }

            if(k != 0){
                res = max(res,ones + zeros);
            }else{
                res = max(res,ones);
            }
        
        }

        return res;
    }
};
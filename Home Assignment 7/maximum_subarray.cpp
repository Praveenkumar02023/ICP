class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = -1e9+7;

        int curSum = 0;
        int maxNum = -1e9+7;
        int n = nums.size();
        bool touch = false;

        for(int i = 0 ; i < n ; i++){

            if(curSum + nums[i] > 0){

                curSum += nums[i];
                maxSum = max(maxSum,curSum);
                touch = true;
            }else{

                curSum = 0;

            }
            maxNum = max(maxNum,nums[i]);
            cout<<nums[i]<<" "<<maxNum;
        }
        if(touch)
        maxSum = max(maxSum,curSum);
        maxSum = max(maxSum,maxNum);
        


        return maxSum ;
    }
};
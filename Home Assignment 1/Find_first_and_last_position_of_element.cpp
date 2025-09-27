class Solution {
public:
    int lower_bound(vector<int>&nums,int target){


        int n = nums.size();

        int s = 0 , e = n-1;
        int idx = -1;
        while(s <= e){

            int mid = s + (e-s)/2;
            
            if(nums[mid] == target){
                idx = mid;
                e = mid-1;
            }else if(nums[mid] > target){
                e = mid-1;
            }else{
                s = mid + 1;
            }

        }

        return idx;

    }

    int upper_bound(vector<int>&nums,int target){


        int n = nums.size();

        int s = 0 , e = n-1;
        int idx = -1;
        while(s <= e){

            int mid = s + (e-s)/2;
            
            if(nums[mid] == target){
                idx = mid;
                s = mid + 1;
            }else if(nums[mid] > target){
                e = mid-1;
            }else{
                s = mid + 1;
            }

        }

        return idx;

    }



    vector<int> searchRange(vector<int>& nums, int target) {
      
        int left = lower_bound(nums,target);
        int right = upper_bound(nums,target);

        return {left,right};
    }
};
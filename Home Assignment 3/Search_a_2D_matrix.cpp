class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size() , m = matrix[0].size();
        int s = 0 , e = (n*m)-1;

        while(s <= e){

            int mid = s + (e-s)/2;

            int row = mid/m;
            int col = (mid%m);

            // cout<<row<<" "<<col<<endl;

            if(row >= 0 && col >= 0 && row < n && col < m && matrix[row][col] == target) return true;
            else if(row >= 0 && col >= 0 && row < n && col < m && matrix[row][col] > target){

                e = mid-1;

            }else{

                s = mid + 1;

            }

        }
        return false;
    }
};
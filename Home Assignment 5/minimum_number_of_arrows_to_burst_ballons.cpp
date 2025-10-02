class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        int n = points.size();

        sort(begin(points),end(points),[&](auto & a , auto & b){
            return a[1] < b[1];
        });

        int ans = 0;

        for(int i = 0 ; i < n ; ){

            int start = points[i][0];
            int end = points[i][1];

            int j = i+1;

            while(j < n){


                int curStart = points[j][0];
                int curEnd  = points[j][1];

                if(curStart > end){

                    break;

                }
                j++;
            }

            ans++;
            i = j;
        }

        return ans;
    }
};
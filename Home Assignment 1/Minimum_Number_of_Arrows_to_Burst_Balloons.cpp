class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        int n = points.size();
        if(n == 0) return 0;

        sort(begin(points),end(points),[](auto &a,auto &b){
            return a[1] < b[1];
        });
       
        int arrow = 0;
        int CurEnd = points[0][1];

        for(int i = 0 ; i < n ; ){

            if(points[i][0] <= CurEnd && points[i][1] >= CurEnd){
                
                i++;

            }else{

                arrow++;
                CurEnd = points[i][1];

            }
        }

        return arrow + 1;
    }
};
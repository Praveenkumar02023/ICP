class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        int n = intervals.size();

        sort(begin(intervals),end(intervals),[&](auto & a , auto & b){

            return a[1] < b[1];

        });

        int eraseCnt = 0;

       int last = -1;

       for(int i = 0 ; i < n ; i++){

            if(last == -1){

                last = i;

            }else{

                int prevEnd = intervals[last][1];
                int curStart = intervals[i][0];

                if(curStart < prevEnd){
                    eraseCnt++;
                }
                else{

                    last = i;

                }
            }

       }

        return eraseCnt;

    }
};
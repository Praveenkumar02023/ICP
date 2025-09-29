class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> res;

        int rowStart = 0, colStart = 0 ;
        int rowEnd = m-1 , colEnd = n-1;

        while(rowStart <= rowEnd && colStart <= colEnd){


           for(int col = colStart ; col <= colEnd ;col++){
                res.push_back(mat[rowStart][col]);
           }
          
           rowStart++;

           for(int row = rowStart ; row <= rowEnd ; row++){

                res.push_back(mat[row][colEnd]);

           }

           colEnd--;

           if(rowStart <= rowEnd){
                for(int col = colEnd ; col >= colStart ; col--){
                    res.push_back(mat[rowEnd][col]);
                }
                rowEnd--;
            }

            if(colStart <= colEnd){

                for(int row = rowEnd ; row >= rowStart ; row--){

                    res.push_back(mat[row][colStart]);

                }
                colStart++;
            }
        }
        
        return res;
    }
};
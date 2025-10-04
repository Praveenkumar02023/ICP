class Solution {
public:

    vector<int> dx = {-1,1,0,0};
    vector<int> dy = {0,0,1,-1};

    bool solve(int i , int j , int k, vector<vector<char>>& board , string& word,vector<vector<int>>& vis){

        if(k == word.size()-1){

            return true;

        }
        

        vis[i][j] = 1;

        for(int l = 0 ; l < 4 ; l++){

            
            int new_i = i + dx[l];
            int new_j = j + dy[l];

            if(new_i >= 0 && new_j >= 0 && new_i < board.size() && new_j < board[0].size() && board[new_i][new_j] == word[k+1] && vis[new_i][new_j] == 0){

               if(solve(new_i,new_j,k+1,board,word,vis)) return true;
            
            }

        }
            vis[i][j] = 0;
            return false;

    }

    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));


        for(int i = 0  ; i < n ; i++){

            for(int j = 0 ; j < m ; j++){

                if(board[i][j] == word[0]){

                    if(solve(i,j,0,board,word,vis)) return true;

                }

            }

        }

        return false;
    }
};
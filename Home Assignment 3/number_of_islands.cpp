class Solution {
public:
    vector<int> dx = {-1,1,0,0};
    vector<int> dy = {0,0,-1,1};

    void dfs(int i , int j , vector<vector<char>>& grid,vector<vector<int>>& vis){

        vis[i][j] = 1;

        for(int k = 0 ; k <  4; k++){

            int new_i = i + dx[k];
            int new_j = j + dy[k];

            if(new_i >= 0 && new_i < grid.size() && new_j >= 0 && new_j < grid[0].size() && grid[new_i][new_j] == '1' && vis[new_i][new_j] == 0){

                dfs(new_i,new_j,grid,vis);

            }
        }

    }

    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        int islands = 0;

        for(int i = 0  ; i < n ; i++){

            for(int j = 0 ; j < m ; j++){

                if(vis[i][j] == 0 && grid[i][j] == '1'){

                    islands++;
                    dfs(i,j,grid,vis);

                }

            }

        }

        return islands;
    }
};
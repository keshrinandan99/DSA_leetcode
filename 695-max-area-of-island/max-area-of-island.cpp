class Solution {
public:
    int n=0;
    int m=0;
    int bfs(vector<vector<int>>&grid,vector<vector<int>>&vis,int row,int col){
        queue<pair<int,int>>q;
        q.push({row,col});
        vis[row][col]=1;
        int row_dir[]={-1,0,1,0};
        int col_dir[]={0,1,0,-1};
        int area=1;
        while(!q.empty()){
            int curr_row=q.front().first;
            int curr_col=q.front().second;
            q.pop();
            vis[curr_row][curr_col]=1;
           
            for(int i=0;i<4;i++){
                int n_row=curr_row+row_dir[i];
                int n_col=curr_col+col_dir[i];
                if(n_row>=0 && n_row<n && n_col>=0 && n_col<m && grid[n_row][n_col]==1 &&!vis[n_row][n_col]){
                    q.push({n_row,n_col});
                    vis[n_row][n_col]=1;
                    area++;
                }
            }
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                   int area= bfs(grid,vis,i,j);
                   ans=max(ans,area);
                }
            }
        }
        return ans;
    }
};
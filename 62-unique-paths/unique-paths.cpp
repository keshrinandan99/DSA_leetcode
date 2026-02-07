class Solution {
public:
    int t[101][101];
    int solve(int &m, int &n , int row,int col){
       if(t[row][col]!=-1)return t[row][col];
        if(row== m-1 && col==n-1)return 1;
        if(row>=m || col>=n)return 0;
        int move_down=solve(m,n,row+1,col);
        int move_right=solve(m,n,row,col+1);
        return t[row][col]=move_down+move_right;
    }
    int uniquePaths(int m, int n) {
        memset(t,-1,sizeof(t));
        return solve(m,n,0,0);
        
    }
};
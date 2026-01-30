class Solution {
public:
    int t[46];

    int solve(int n,int &wayz){
        
        if(n==0){
            return 1;
        }
        
        if(n<0)return 0;
        if(t[n]!=-1)return t[n];
        int ans=solve(n-1,wayz)+solve(n-2,wayz);
       return t[n]=ans;
    }
    int climbStairs(int n) {
        int wayz=0;
        memset(t,-1,sizeof(t));
       return solve(n,wayz);
        //return wayz;
    }
};
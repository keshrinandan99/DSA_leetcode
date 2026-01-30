class Solution {
public:
    int t[1001];
    int solve(vector<int>&cost,int idx){
        if(idx>=cost.size())return 0;
        if(t[idx]!=-1)return t[idx];
        int take1=cost[idx]+solve(cost,idx+1);
        int take2=cost[idx]+solve(cost,idx+2);
        return t[idx]=min(take1,take2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(t,-1,sizeof(t));
        int first=solve(cost,0);
        memset(t,-1,sizeof(t));
        int second=solve(cost,1);
        return min(first,second);
    }
};
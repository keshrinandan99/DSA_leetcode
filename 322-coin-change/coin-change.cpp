class Solution {
public:
    int t[13][10001];
    int solve(vector<int>&coins,int amount,int idx){
        if(amount==0)return  0;
        if(idx==0){
            if(amount %coins[idx]==0){
                return amount/coins[idx];
            }
            else{
                return  1e9;
            }
        }
        if(t[idx][amount]!=-1)return t[idx][amount];
        int not_take=solve(coins,amount,idx-1);
        int take=INT_MAX;
        if(coins[idx]<=amount){
             take=1+solve(coins,amount-coins[idx],idx);
        }
        return t[idx][amount]=min(not_take,take);

        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        memset(t,-1,sizeof(t));
        long long ans= solve(coins,amount,n-1);
        return ans==1e9?-1:(int)ans;
    }
};
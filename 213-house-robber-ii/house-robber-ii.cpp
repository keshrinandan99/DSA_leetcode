class Solution {
public:
    int t[101];
  
    int solve(vector<int>&nums,int idx,int stop){
        if(idx>stop)return 0;
        //take
        if(t[idx]!=-1)return t[idx];
        int take=nums[idx]+solve(nums,idx+2,stop);
        int skip=solve(nums,idx+1,stop);
        return t[idx]=max(take,skip);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        memset(t,-1,sizeof(t));
      int first=solve(nums,0,n-2);
        memset(t,-1,sizeof(t));
        int second=solve(nums,1,n-1);
        return max(first,second);
    }
};
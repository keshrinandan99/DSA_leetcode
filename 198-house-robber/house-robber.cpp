class Solution {
public:
    int t[101];
    int solve(vector<int>&nums,int idx){
        if(idx>=nums.size())return 0;
        if(t[idx]!=-1)return t[idx];
        //take
        int take= nums[idx]+solve(nums,idx+2);
        // skip
        int skip=solve(nums,idx+1);
        return t[idx]=max(take,skip);
    }
    int rob(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int ans=solve(nums,0);
        return ans;
    }
};
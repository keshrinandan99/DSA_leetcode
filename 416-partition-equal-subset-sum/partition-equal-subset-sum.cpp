class Solution {
public:
    int t[201][10001];
    bool solve(vector<int>&nums,int total,int idx,int sum){
        if(total==sum)return true;
        if(idx>=nums.size() || sum>total)return false;
        
        if(t[idx][sum]!=-1)return t[idx][sum];
        //take
        return t[idx][sum]=solve(nums,total,idx+1,sum+nums[idx]) || solve(nums,total,idx+1,sum);
        
    }
    bool canPartition(vector<int>& nums) {
        int total=0;
        memset(t,-1,sizeof(t));
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        if(total%2!=0)return false;
        return solve(nums,total/2,0,0);
    }
};
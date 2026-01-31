class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int pre=1;
        int suffix=1;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(pre==0)pre=1;
            if(suffix==0)suffix=1;
            pre=nums[i]*pre;
            suffix=nums[n-i-1]*suffix;
            ans=max(ans,max(pre,suffix));
        }
        return ans;
    }
};
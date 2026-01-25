class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int left=0;
        int right=0;
        int n=nums.size();
        int mini=INT_MAX;
        if(k>n)return -1;
        while(right<n){
            
            while(right-left+1>k){
                left++;
            }
            if(right-left+1==k){
                mini=min(mini,nums[right]-nums[left]);
            }
            right++;
        }
        return mini;
    }
};
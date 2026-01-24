class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int maxi=INT_MIN;
        for(int i=0;i<nums.size()/2;i++){
            maxi=max(maxi,(nums[i]+nums[nums.size()-i-1]));
        }
        return maxi;
    }
};
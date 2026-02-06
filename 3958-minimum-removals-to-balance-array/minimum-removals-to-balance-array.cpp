class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int max_len=INT_MIN;
        int i=0;
        int n=nums.size();
        for(int j=0;j<n;j++){
            while((long long) nums[j]>((long long) nums[i]*k)){
                i++;
            }
            max_len=max(max_len,j-i+1);
        }
        return n-max_len;
    }
};
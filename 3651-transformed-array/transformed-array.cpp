class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>result(nums.size());
        int i=0;
        int steps=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]>0){
                steps=(i+nums[i])%n;
                result[i]=nums[steps];
            }
            else if(nums[i]<0){
                steps=((i-abs(nums[i])%n+n))%n;
                result[i]=nums[steps];
            }
            else {
                result[i]=nums[i];
            }
            i++;
        }
        return result;
    }
};
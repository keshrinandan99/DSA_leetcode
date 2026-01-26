class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(begin(arr),end(arr));
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++){
            if(mini>abs(arr[i]-arr[i-1])){
                mini=abs(arr[i]-arr[i-1]);
            }
        }
        for(int i=1;i<arr.size();i++){
            vector<int>temp;
            bool flag=false;
            if(abs(arr[i]-arr[i-1])==mini){
                flag=true;
                temp.push_back(arr[i-1]);
                temp.push_back(arr[i]);
            }
            if(flag){
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
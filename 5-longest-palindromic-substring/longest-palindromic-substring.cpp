class Solution {
public:
  //  int t[1001][1001];
    bool solve(string &s,int i,int j){
           
            if(i>=j)return 1;
            // if(t[i][j]!=-1)return t[i][j];
            if(s[i]==s[j])return solve(s,i+1,j-1);
             return 0;
    }
    string longestPalindrome(string s) {
       int maxLen=INT_MIN;
        int sp=0;
     //   memset(t,-1,sizeof(t));


        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(solve(s,i,j)){
                    if(j-i+1>maxLen){
                        maxLen=j-i+1;
                        sp=i;
                    }
                }
            }
        }
        return s.substr(sp,maxLen);
    }
};
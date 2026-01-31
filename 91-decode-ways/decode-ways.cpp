class Solution {
public:
    int t[101];
    int solve(string &s,int &n,int idx){
        if(idx==n)return  1;
        if(s[idx]=='0')return t[idx]=0;
        if(t[idx]!=-1)return t[idx];
        int takeOne=solve(s,n,idx+1);
        int takeTwo=0;
        if(idx+1<n){
            if(s[idx]=='1' || s[idx]=='2'&& s[idx+1]<='6'){
                takeTwo=solve(s,n,idx+2);
            }
        }
        return t[idx]=takeOne+takeTwo;
    }
    int numDecodings(string s) {
        memset(t,-1,sizeof(t));
        int n=s.size();
        return solve(s,n,0);
        
    }
};
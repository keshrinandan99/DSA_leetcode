class Solution {
public:
    int t[301];
    bool solve(string &s,unordered_set<string>&st,int idx){
        int n=s.size();
        if(idx>=n)return true;
        if(st.find(s)!=st.end())return true;    
        if(t[idx]!=-1)return t[idx];
        for(int l=1;l<=n;l++){
           string temp=s.substr(idx,l);
       
            if(st.find(temp)!=st.end() && solve(s,st,idx+l)){
                return t[idx]= true;
            }
        }
        return t[idx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string>st;
        memset(t,-1,sizeof(t));
        for(auto it:wordDict){
            st.insert(it);
        }    
        int n=s.size();
        return solve(s,st,0);
    }
};

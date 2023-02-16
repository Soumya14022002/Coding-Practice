class Solution {
public:
   int rec(int i1,int i2,int i3,string &s1,string &s2,string &s3,int n1,int n2,int n3,vector<vector<vector<int>>>&dp)
   {
       if (i1==n1 && i2==n2 && i3==n3)
       return 1;
       if (i3==n3) return 0;
       if (dp[i1][i2][i3]!=-1) return dp[i1][i2][i3];
       int a=0;
       if(i1<n1 && s3[i3]==s1[i1])
       a=rec(i1+1,i2,i3+1,s1,s2,s3,n1,n2,n3,dp);
       int b=0;
        if(i2<n2 && s3[i3]==s2[i2])
       b=rec(i1,i2+1,i3+1,s1,s2,s3,n1,n2,n3,dp);
       return dp[i1][i2][i3]=a||b;
   }
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size(),n2=s2.size(),n3=s3.size();
        vector<vector<vector<int>>>dp(n1+1,vector<vector<int>>(n2+1,vector<int>(n3+1,-1)));
        return rec(0,0,0,s1,s2,s3,n1,n2,n3,dp);
    }
};

class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int n=s.length();
        int m=t.length();
        int count=0;
        for(int i=0;i<m and count<n;i++)
        {
            if(s[count]==t[i])
            {
                count++;
            }
        }
        return (count==n);
    }
};

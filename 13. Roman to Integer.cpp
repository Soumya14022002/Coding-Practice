class Solution {
public:
    int romanToInt(string s) 
    {
        int a=0;
        int n=s.length();
        unordered_map<char,int>m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]<m[s[i+1]])
            {
                a=a-m[s[i]];
            }
            else
            {
                a=a+m[s[i]];
            }
        }
        return a;
    }
};

class Solution {
public:
    bool isValid(string s) 
    {
        string st;
        map<char,char>m;
        m['(']=')';
        m['{']='}';
        m['[']=']';
        st.push_back(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(m[st.back()]==s[i])
            {
                st.pop_back();
            }
            else
            {
                st.push_back(s[i]);
            }
        }
        return st.size()?0:1;
    }
};


 

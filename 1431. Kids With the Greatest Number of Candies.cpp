class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int a=0;
        a=*max_element(candies.begin(),candies.end());
        int x=candies.size();
        vector<bool>v;
        for(int i=0;i<x;i++)
        {
            if(candies[i]+extraCandies>=a)
            {
                v.push_back(true);
            }
            else
            {
                v.push_back(false);
            }
        }
        return v;
    }
};

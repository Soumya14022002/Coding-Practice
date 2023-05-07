class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(target>=x)
            {
                x+=nums[i];
            }
        }
        return x;
        
    }
};

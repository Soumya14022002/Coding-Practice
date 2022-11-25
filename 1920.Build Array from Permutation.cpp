class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int a=nums.size();
        vector<int>ans(a);
        for(int i=0;i<a;i++)
        {
            ans[i]=nums[nums[i]];

        }
        return ans;
    }
};

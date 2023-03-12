class Solution 
{
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int n=nums.size();
        int a=0;
        for(int i=0;i<n;i++)
        {
            a=a+nums[i];
        }

        int b=0,k;
        
        for(int j=0;j<n;j++)
        {
        while(nums[j] > 0)
        {
            k = nums[j] % 10;
            b = b + k;
            nums[j] = nums[j] / 10;
        }
        }
        int x=a-b;
        return x;
    }
    
};

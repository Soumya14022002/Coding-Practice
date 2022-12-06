class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if(m > n) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int l1, l2, r1, r2, c1, c2, lo = 0, hi = m;
        while(lo <= hi) {
            int c1 = (lo + hi) / 2;
            c2 = (m + n + 1) / 2 - c1;
            
            l1 = (c1 == 0) ? INT_MIN : nums1[c1 - 1];
            r1 = (c1 == m) ? INT_MAX : nums1[c1];
            l2 = (c2 == 0) ? INT_MIN : nums2[c2 - 1];
            r2 = (c2 == n) ? INT_MAX : nums2[c2];
            
            if(l1 > r2) {
                hi = c1 - 1;
            } else if(l2 > r1) {
                lo = c1 + 1;
            } else {
                break;
            }
        }
        
        if((m + n) % 2 == 0) {
            return (max(l1, l2) + min(r1, r2)) / 2.0;
        }
        
        return max(l1, l2);
    }
};

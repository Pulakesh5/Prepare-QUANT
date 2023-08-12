class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l =0 , r = 0, i=0, n = nums.size();
        int lastMoved = 0, k = 0;
        while(i<n)
        {
            l = i;
            r = i;
            while(r<n && nums[r]==nums[l])
                r++;
            if(r-l==1)
                nums[lastMoved++] = nums[l];
            else if(r-l>=2)
            {
                nums[lastMoved++] = nums[l];
                nums[lastMoved++] = nums[l];
            }
            k+=min(r-l,2);
            i = r;
        }    
        return k;
    }

};

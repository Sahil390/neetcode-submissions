class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;
        while(low <= high)
        {
            if(nums[low] == target) return low;
            else if(nums[high] == target) return high;
            else {
                int p = (low+high)/2;
                if(nums[p] == target) return p;
                else if(nums[p] > target) high = p-1;
                else if(nums[p] < target) low = p+1;
            }
        }

        return -1;
    }
};

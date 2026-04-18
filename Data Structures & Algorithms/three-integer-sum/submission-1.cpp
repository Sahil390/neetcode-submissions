class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = nums.size();
        vector<vector<int>> ans;
        if(nums[0] > 0 || s < 3) return ans;

        for(int i = 0;i < s-2;i++)
        {
            if(i != 0 && nums[i] == nums[i-1]) continue;
            int l = i+1;
            int r = s-1;
            while(l < r)
            {
                int c = nums[i] + nums[l] + nums[r];
                if(c < 0) l++;
                else if(c > 0) r--;
                else if(c == 0)
                {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(nums[l] == nums[l-1] && l < r) l++;
                    while(nums[r] == nums[r+1] && r > l) r--;

                }
            }
        }


        return ans;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> ans;
        for(int i = 0;i < nums.size();i++)
        {
            int r = target - nums[i];
            if(hash.contains(r))
            {
                ans.push_back(hash[r]);
                ans.push_back(i);
                break;
            }
            hash[nums[i]] = i;
        }

        return ans;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i = 0;i < nums.size();i++)
        {
            int t = target - nums[i];
            if(hash.contains(t)) return {hash[t],i};
            hash[nums[i]] = i;
        }
        return {};
    }
};

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> hash;

        for(int i : nums)
        {
            if(hash[i]) return true;
            hash[i] = true;
        }

        return false;
    }
};
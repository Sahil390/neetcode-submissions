class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> hash;
        int s = numbers.size();
        for(int i = 0;i < s;i++)
        {
            if(hash.contains(target-numbers[i])) return {hash[target-numbers[i]]+1,i+1};
            hash[numbers[i]] = i;
        }
        return {};
    }
};

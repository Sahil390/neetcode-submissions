class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int i : nums)
        {
            hash[i]++;
        }

        vector<pair<int,int>> freq;

        for(auto i : hash)
        {
            freq.push_back({i.second,i.first});
        }

        sort(freq.begin(),freq.end(),greater<pair<int,int>>());


        vector<int> ans;

        for(int i = 0; i < k;i++)
        {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};
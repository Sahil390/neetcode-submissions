class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;

        for(int i : nums) hash[i]++;

        vector<vector<int>> track(nums.size()+1);
        int g = 0;
        for(auto p : hash)
        {
            g = max(g,p.second);
            track[p.second].push_back(p.first);
        }
        vector<int> ans;
        for(int i = g;i && k;i--)
        {
            for(int te : track[i])
            {
                k--;
                ans.push_back(te);
                if(!k) break;
            }
        }
        return ans;

    }
};

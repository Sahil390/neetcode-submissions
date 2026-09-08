class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        for(string s : strs)
        {
            string k = s;
            sort(k.begin(),k.end());
            hash[k].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto p : hash)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};

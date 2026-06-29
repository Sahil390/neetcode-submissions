class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> hash;

        for(string s : strs)
        {
            string t = s;
            sort(t.begin(),t.end());
            hash[t].push_back(s);
        }

        for(auto i : hash)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};

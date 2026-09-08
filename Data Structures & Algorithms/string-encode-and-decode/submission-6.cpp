class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";
        for (const string& s : strs) {
            ans += to_string(s.length()) + "#" + s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        
        while (i < s.length()) {
            int j = i;
            // Find the delimiter '#' to extract the length prefix
            while (s[j] != '#') {
                j++;
            }
            
            int length = stoi(s.substr(i, j - i));
            i = j + 1; // Move pointer past '#'
            
            ans.push_back(s.substr(i, length));
            i += length; // Move pointer past the extracted string
        }
        
        return ans;
    }
};
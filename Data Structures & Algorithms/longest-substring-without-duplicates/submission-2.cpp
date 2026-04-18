class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int l = 0;
        int r = 0;
        int n = s.size();
        
        // Using a set or vector is slightly cleaner for checking existence
        // vector<int> map(256, 0) is faster than unordered_map
        unordered_set<char> charSet; 

        while (r < n) {
            // If duplicate exists, shrink window from LEFT
            while (charSet.find(s[r]) != charSet.end()) {
                charSet.erase(s[l]);
                l++;
            }
            
            // Add current character
            charSet.insert(s[r]);
            
            // Update answer at EVERY step, not just on duplicates
            ans = max(ans, r - l + 1);
            
            r++;
        }

        return ans;
    }
};
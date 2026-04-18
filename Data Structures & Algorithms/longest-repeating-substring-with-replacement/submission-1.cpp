class Solution {
public:
    int characterReplacement(string s, int k) {
    vector<int> freq(26, 0);   // count of each character in current window
    int l = 0;                // left pointer of window
    int maxFreq = 0;          // highest frequency of any char in window
    int ans = 0;

    for (int r = 0; r < s.size(); r++) {   // right pointer moves
        freq[s[r] - 'A']++;                // include s[r] in window
        maxFreq = max(maxFreq, freq[s[r] - 'A']); // update most frequent char

        // if we need more than k replacements, shrink window
        while ((r - l + 1) - maxFreq > k) {
            freq[s[l] - 'A']--;  // remove s[l] from window
            l++;                // move left pointer
        }

        ans = max(ans, r - l + 1); // update answer
    }

    return ans;
}

};

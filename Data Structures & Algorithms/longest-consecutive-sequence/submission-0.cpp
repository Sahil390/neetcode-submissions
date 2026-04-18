class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
    if (n == 0) return 0;

    // 1. Put all numbers in a HashSet for O(1) lookup
    unordered_set<int> s;
    for (int x : nums) {
        s.insert(x);
    }

    int longest = 0;

    // 2. Iterate through the numbers
    for (int x : s) {
        // 3. Only start counting if 'x' is the START of a sequence
        // We know it's the start if 'x-1' is NOT in the set.
        if (s.find(x - 1) == s.end()) {
            int currentNum = x;
            int currentStreak = 1;

            // 4. Expand the sequence as long as we find the next number
            while (s.find(currentNum + 1) != s.end()) {
                currentNum++;
                currentStreak++;
            }

            longest = max(longest, currentStreak);
        }
    }

    return longest;

    }
};

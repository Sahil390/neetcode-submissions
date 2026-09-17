class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> t;
        for(int i : nums) t.insert(i);
        int ans = 0;
        int pre = 0;
        int temp = 0;
        for(auto i : t)
        {
            pre = (i == temp+1) ? pre+1 : 1;
            temp = i;
            ans = max(ans,pre);
        } 
        return ans;

    }
};
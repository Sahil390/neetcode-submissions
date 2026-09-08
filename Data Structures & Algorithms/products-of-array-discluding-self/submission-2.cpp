class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> pre(s);
        pre[0] = nums[0];
        vector<int> pos(s);
        pos[s-1] = nums[s-1];
        for(int i = 1;i<s;i++) pre[i] = pre[i-1] * nums[i];
        for(int i = s-2;i >= 0;i--) pos[i] = pos[i+1] * nums[i];

        vector<int> ans(s);
        for(int i = 0;i < s;i++)
        {
            int pe = (i <= 0)? 1 : pre[i-1];
            int po = (i >= s-1) ? 1 : pos[i+1];
            ans[i] = pe * po;
        }
        return ans;
    }
};

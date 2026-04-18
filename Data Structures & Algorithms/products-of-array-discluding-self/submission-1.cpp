class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        // if(s <3) return nums;
        vector<int> lmul(s);
        vector<int> rmul(s);
        lmul[0] = nums[0];
        rmul[s-1] = nums[s-1];
        for(int i = 1;i < s;i++) lmul[i] = lmul[i-1] * nums[i];
        for(int j = s-2;j >= 0;j--) rmul[j] = rmul[j+1] * nums[j];

        vector<int> ans(s);
        ans[0] = rmul[1];
        ans[s-1] = lmul[s-2];
        for(int k = 1;k < s-1;k++) ans[k] = lmul[k-1]*rmul[k+1];
        return ans;
    }
};

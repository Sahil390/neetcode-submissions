class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s = heights.size();
        if(s < 2) return 0;
        int ans = 0;
        int l = 0; 
        int r = s-1;
        while(l < r)
        {
            int temp = min(heights[l],heights[r]) * (r-l);
            ans = max(temp,ans);
            if(heights[l] < heights[r]) l++;
            else if(heights[l] > heights[r]) r--;
            else 
            {
                l++;
                r--;
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = numbers.size();
        for(int i = 0;i < s;i++)
        {
            int t = target - numbers[i];
            for(int j = i+1;j < s;j++)
            {
                if(numbers[j] == t) return {i+1,j+1};
            }
        }
    }
};

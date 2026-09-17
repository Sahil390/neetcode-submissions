class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if(n == 1) return 1;
        int i = 0;
        int j = n-1;
        while(i < j)
        {
            while(!isalnum(s[i]) && i < n) i++;
            while(!isalnum(s[j]) && j > 0) j--;
            if(i == n || j == 0) return 1;
            if(tolower(s[i]) == tolower(s[j]))
            {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};
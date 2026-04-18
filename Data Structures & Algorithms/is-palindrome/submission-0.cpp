class Solution {
public:
    bool isPalindrome(string s) {
        string rs = "";
        for(char i : s)
        {
            if(!isalnum(i)) continue;
            rs+=tolower(i);
        }
        if (rs.empty()) return true;
        int st = 0;
        int en = rs.size()-1;

        while(st < en)
        {
            if (rs[st] != rs[en]) return false;
            st++;
            en--;
        }
        return true;

    }
};
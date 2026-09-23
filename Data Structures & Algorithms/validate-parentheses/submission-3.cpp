class Solution {
public:
    bool isValid(string s) {
        stack<char> pa;
        for(char c : s)
        {
            if(c == '(' || c == '{' || c == '[') pa.push(c);
            else
            {
                if(pa.size() == 0) return false;
                else if(pa.top() == '(' && c == ')') pa.pop();
                else if(pa.top() == '{' && c == '}') pa.pop();
                else if(pa.top() == '[' && c == ']') pa.pop();
                else return false;
            }
        }
        if(pa.size() == 0) return true;
        return false;
    }
};

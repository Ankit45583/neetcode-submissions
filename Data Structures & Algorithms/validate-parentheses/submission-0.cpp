class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>t;

        for (char c : s) 
        {
            if (c == '{' || c == '[' || c == '(')
             {
                t.push(c);
            }
            else 
            {
                if (t.empty())
                    return false;

                char top = t.top();
                t.pop();

                if ((c == '}' && top != '{') ||
                    (c == ']' && top != '[') ||
                    (c == ')' && top != '(')) 
                    {
                    return false;
                }
            }
        }

        return t.empty();
    }
};

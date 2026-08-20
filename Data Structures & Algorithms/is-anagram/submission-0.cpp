class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> temp;
        bool result = true;

        for(char p : s)
        {
            temp[p]++;
        }
        for(char x : t)
        {
            temp[x]--;
        }

        for(auto &p : temp)
        {
            if(p.second != 0 )
            {
                 result = false;
            }
        }
        return result;
    }
};

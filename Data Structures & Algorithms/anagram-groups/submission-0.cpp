class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>>temp;
        vector<vector<string>>result; 

        for(string s : strs)
        {
            string c = s;
            sort(c.begin() , c.end());
            temp[c].push_back(s);
        }

        for(auto &p : temp)
        {
            result.push_back(p.second);
        }
        return result;

        
    }
};

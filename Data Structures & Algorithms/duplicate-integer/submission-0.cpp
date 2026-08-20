class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int , int> mp ;
        bool temp = false;

        for(int t : nums)
        {
            mp[t]++;
        }
        for(auto &p : mp)
        {
            if(p.second > 1)
            {
              temp = true;
            }
        }
        return temp;
    }
};
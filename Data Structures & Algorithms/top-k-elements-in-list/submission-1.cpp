class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> temp;

        for(int x : nums) {
            temp[x]++;
        }

        vector<pair<int, int>> v;

        for(auto &p : temp) {
            v.push_back({p.second, p.first});
        }

        sort(v.rbegin(), v.rend());

        vector<int> result;

        for(int i = 0; i < k; i++) {
            result.push_back(v[i].second);
        }

        return result;
    }
};

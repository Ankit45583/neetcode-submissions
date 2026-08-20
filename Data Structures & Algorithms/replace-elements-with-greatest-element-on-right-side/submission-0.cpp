class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>result;
        int n = arr.size();

        for(int i = 1 ; i < n ; i++)
        {   
            int small = arr[i];
            for(int j = i ; j < n ; j++)
            {
                 if(arr[i] < arr[j])
                 {
                    arr[i] = arr[j];
                 }
            }
           result.push_back(arr[i]);
        }

        result.push_back(-1);
        return result;
    }
};
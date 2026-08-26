class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int temp = INT_MAX;

        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] < temp)
            {
                temp= nums[i];
            }
        }

 return temp;
    }
};

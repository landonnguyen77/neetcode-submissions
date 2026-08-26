class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r)
            {
                if (nums[i] + nums[l] + nums[r] < 0)
                {
                    l++;
                }
                else if (nums[i] + nums[l] + nums[r] > 0)
                {
                    r--;
                }
                else
                {
                    result.push_back({nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1])
                    {
                        l++;
                    }
                    while (r > l && nums[r] == nums[r - 1])
                    {
                        r--;
                    }
                    l++;
                    r--;
                }
            }
        }
        return result;
    }
};

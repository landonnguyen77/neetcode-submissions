class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            count = nums[i] ? count + 1 : 0;
            res = max(res, count);
        }
        return res;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //how should the hashmap mapping go?
        //
        unordered_map<int, int> complement;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (complement.contains(diff))
            {
                return {complement[diff], i};
            }
            complement[nums[i]] = i;
        }
        return {};
    }
};

class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> count;
        vector<pair<int, int>> arr;

        for (int num : nums) {
            count[num]++;
        }
        for (pair<int, int> p : count) {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());
        for (int i = 0; i < k; i++)
        {
            result.push_back(arr[i].second);
        }
        return result;
    }
};

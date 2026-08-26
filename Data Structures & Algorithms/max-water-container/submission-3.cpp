class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0; 
        int l = 0;
        int r = heights.size() - 1;

        while (l < r)
        {
            int width = r - l;
            int height = min(heights[l], heights[r]);
            int area = width * height;
            result = max(result, area);
            if (heights[l] <= heights[r])
            {
                l++;
            } 
            else 
            {
                r--;
            }
        }
        return result;
    }
};

class Solution {
public:
    int maxArea = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        /*
        can attempt a dfs
        go through each cell in the grid
        if a cell == '1' then increment currArea
        keep a global maxArea variable 
        */
        int ROWS = grid.size();
        int COLS = grid[0].size();
        int area = 0;
        for (int r = 0; r < ROWS; r++)
        {
            for (int c = 0; c < COLS; c++)
            {
                if (grid[r][c] == 1)
                {
                    area = max(area, dfs(grid, r, c));
                }
            }
        }
        return area;
    }
    int dfs(vector<vector<int>>& grid, int r, int c)
    {
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0)
        {
            return 0;
        }
        grid[r][c] = 0;
        int res = 1;
        res += dfs(grid, r + 1, c);
        res += dfs(grid, r - 1, c);
        res += dfs(grid, r, c + 1);
        res += dfs(grid, r, c - 1);
        return res;
    }
};

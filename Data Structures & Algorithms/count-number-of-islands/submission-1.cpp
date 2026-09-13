class Solution {
public:
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int numIslands(vector<vector<char>>& grid) {
        /*
        doing a dfs
        start at the top left element and explore each cell in the grid
        if the cell is a '1', we can run dfs recursively to check if neighboring cells are also '1'
        also increment the count
        we then turn that cell to '0'
        */
        int ROWS = grid.size();
        int COLS = grid[0].size();
        int islands = 0;

        for (int r = 0; r < ROWS; r++)
        {
            for (int c = 0; c < COLS; c++)
            {
                if (grid[r][c] == '1')
                {
                    islands++;
                    dfs(grid, r, c);
                }
            }
        }
        return islands;
    }
    void dfs(vector<vector<char>>& grid, int r, int c)
    {
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == '0')
        {
            return;
        }
        grid[r][c] = '0';
        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);
    }
};

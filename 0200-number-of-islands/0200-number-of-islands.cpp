class Solution {
public:
    vector<vector<int>> visited;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    
    void dfs(vector<vector<char>>& grid, int x, int y) {
        visited[x][y] = 1;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
                if (grid[nx][ny] == '1' && visited[nx][ny] == 0) {
                    dfs(grid, nx, ny);
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        if (grid.empty()) return 0;
        
        visited = vector<vector<int>>(grid.size(), vector<int>(grid[0].size(), 0));

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (visited[i][j] == 0 && grid[i][j] == '1') {
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};

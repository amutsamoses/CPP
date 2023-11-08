#include <iostream>
#include <vector>

void dfs(std::vector<std::vector<int>>& grid, int row, int col) {
    // Check if the current cell is out of bounds or already visited
    if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] != 1) {
        return;
    }

    // Mark the current cell as visited
    grid[row][col] = -1;

    // Recursively explore adjacent land cells
    dfs(grid, row - 1, col);
    dfs(grid, row + 1, col);
    dfs(grid, row, col - 1);
    dfs(grid, row, col + 1);
}

int numberOfEnclaves(std::vector<std::vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    // Mark land cells connected to the sea boundary with -1
    for (int i = 0; i < rows; i++) {
        if (grid[i][0] == 1) {
            dfs(grid, i, 0);
        }
        if (grid[i][cols - 1] == 1) {
            dfs(grid, i, cols - 1);
        }
    }

    for (int j = 0; j < cols; j++) {
        if (grid[0][j] == 1) {
            dfs(grid, 0, j);
        }
        if (grid[rows - 1][j] == 1) {
            dfs(grid, rows - 1, j);
        }
    }

    // Count the remaining land cells
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    std::vector<std::vector<int>> grid = {
        {1, 1, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1},
        {0, 0, 0, 1, 0, 1, 1, 1, 1},
    };

    int result = numberOfEnclaves(grid);
    std::cout << "Number of land cells not part of enclaves: " << result << std::endl;

    return 0;
}

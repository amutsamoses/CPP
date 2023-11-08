#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dfs(vector<vector<int>>& grid, int row, int col, int color)
{
	if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] !=)
	{
		return 0;	
	}
	
	grid[row][col] = color;
	
	int size = 1;
	
	size += dfs(grid, row - 1, col, color);
	size += dfs(grid, row + 1, col, color);
	size += dfs(grid, row, col - 1, color);
	size += dfs(grid, row, col + 1, color);
	
	return size;
}
int largestIsland(vector<vector<int>>& grid)
{
	int rows = grid.size();
	int cols = grid[0].size();
	int maxIslandSize = 0;
	int color = 2;
	
	for (int i = 0; i < rows; i+++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (grid[i][j] == 1)
			{
				int isLandSize = dfs(grid,i, j, color);
				maxIslandSize = max(maxIslandSize, islandSize);
				color++;
			}
		}
	}
	return maxIslandSize;
}
int main()
{
	vector<vector<int>> grid = {
	{1, 1, 0, 0, 0},
	{0, 1, 0, 0, 1},
	{1, 0, 0, 1, 1},
	{0, 0, 0, 0, 0},
	{1, 1, 0, 1, 1}};
	
	int largestSize = largestIsland(grid);
	cout << "Size of the largest island: " << largestSize << endl;
	
	return 0;
}
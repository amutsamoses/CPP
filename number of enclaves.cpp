#include <iostream>
#include <vector>

using namespace std;

int numberOfEncloves(vector<vector<int>> &grid)
{
	//mark all land cells on the border as visited
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[0].size(); j++)
		{
			if (i == 0 || i == grid.size() - 1 || j == 0 || j == grid[0].size() - 1)
			{
				if (grid[i][j] == 1)
				{
					grid[i][j] = -1;
				}
			}
		}
	}
	//perform a DFS to mark all connected land cells as visited
	void dfs(int i, int j)
	{
		if (grid[i][j] == 1)
		{
			grid[i][j] = -1;
			
			for (int di = -1; di <= 1; di++)
			{
				for (int dj = -1; dj <= 1; dj++)
				{
					int ni = i + di;
					int nj = j + dj;
					
					if (0 <= ni && ni < grid.size() && 0 <= nj && nj < grid[0].size() && grid[ni][nj] == 1)
					{
						dfs(ni, nj);
					}
				}
			}
		}
	}
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[0].size(); j++)
		{
			if (grid[i][j] == 1)
			{
				dfs(i, j);
			}
		}
	}
	//count the number of enclaves
	int count = 0;
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[0].size(); j++)
		{
			if (grid[i][j] == 1)
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	vector<vector<int>> grid = 
	{
		{1, 1, 0, 1, 1},
		{1, 1, 0, 1, 0},
		{1, 0, 0, 0, 1},
		{1, 0, 0, 0, 1},
		{1, 1, 0, 1, 1}
	};
	int numberOfEnclaves = numberOfEnclaves(grid);
	
	cout << "The number of Enclaves is : " << numberOfEnclaves << endl;
	
	return 0;
}
#include "grid.h"
#include "iostream"

Grid::Grid()
{
	numRows = 20;
	numCols = 10;
	cellSize = 30;

	Initialize();
	colors = GetCellColors();
}

void Grid::Initialize()
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			gridSize[row][col] = 0;
		}
	}
}
void Grid::Print()
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			std::cout<<gridSize[row][col] <<" ";
		}
		std::cout << std::endl;
	}
}


std::vector<Color> Grid::GetCellColors()
{
	Color grey = {26, 31, 40, 255};
	Color green = {47, 230, 23, 255};
	Color red = {232, 18, 18, 255};
	Color orange = {226, 116, 17, 255};
	Color yellow = {237, 234, 4, 255};
	Color purple = {166, 0, 247, 255};
	Color cyan = {21, 204, 209, 255};
	Color blue = {13, 64, 216, 255};

	return {grey, green, red, orange, yellow, purple, cyan, blue};
}

void Grid::Draw()
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			int cellValue = gridSize[row][col];
			DrawRectangle(row, col, cellSize, cellSize, colors[cellValue]);
		}
	}
}
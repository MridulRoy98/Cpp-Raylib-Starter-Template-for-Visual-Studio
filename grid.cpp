#include "grid.h"
#include "iostream"

Grid::Grid()
{
	numRows = 20;
	numCols = 10;
	cellSize = 30;

	colors = GetCellColors();
	Initialize();
	
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

void Grid::Draw()
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < numCols; col++)
		{
			int cellValue = gridSize[row][col];
			DrawRectangle(col* cellSize, row* cellSize, cellSize-1, cellSize-1, colors[cellValue]);
		}
	}
}
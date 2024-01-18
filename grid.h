#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
	Grid();
	int gridSize[20][10];

	void Initialize();
	void Print();
	void Draw();

private:
	int numRows;
	int numCols;
	int cellSize;
	
	std::vector<Color> GetCellColors();
	std::vector<Color> colors;

};
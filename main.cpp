#include <raylib.h>
#include "grid.h"

int main()
{
	Color backDrop = { 44, 44, 127, 255 };
	InitWindow(300, 600, "Tetris");
	SetTargetFPS(60);

	Grid grid = Grid();
	grid.Print();

	while (WindowShouldClose() == false)
	{
		BeginDrawing();
		ClearBackground(backDrop);
		grid.Draw();

		EndDrawing();

	}

	CloseWindow();
}
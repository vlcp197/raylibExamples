#include "basicWindow.h"
#include <iostream>


int basicWindow(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight,"Basic Window");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(Color{ 0, 121, 241, 255 });
            DrawText("Hello World",screenWidth/2 - 120,screenHeight/2 - 20,50, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
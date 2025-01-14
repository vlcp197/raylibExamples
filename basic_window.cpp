#include <iostream>
#include <raylib.h>


int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight,"Basic Window");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            
        EndDrawing();
    }

    CloseWindow();

}
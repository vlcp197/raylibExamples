#include "camera2D.h"

int camera2D(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Camera 2D");

    Rectangle player = {400,280, 40, 40}; 
    Rectangle buildings[MAX_BUILDINGS] = { 0 };
    Color buildColors[MAX_BUILDINGS] = { 0 }; 

    int spacing = 0;

    for (int i = 0; i < MAX_BUILDINGS; i++)
    {
        buildings[i].width = (float)GetRandomValue(50, 200);
        buildings[i].height = (float)GetRandomValue(100, 800);
        buildings[i].y = screenHeight - 130.0f - buildings[i].height;
        buildings[i].x = -6000.0f + spacing;

        spacing += (int) buildings[i].width;

        buildColors[i] = (Color){GetRandomValue(200, 240), GetRandomValue(200, 240), GetRandomValue(200, 250), 255};
    }

    

    while (!WindowShouldClose())
    {

    }

    return 0;    
}

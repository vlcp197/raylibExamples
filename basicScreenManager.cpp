#include "basicScreenManager.h"
#include <iostream>


int basicScreenManager(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Screen manager");

    GameScreen currentScreen = LOGO;

    int framesCounter = 0;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {

        switch(currentScreen)
        {
            case LOGO:
            {
                framesCounter++;

                if (framesCounter > 120)
                {
                    currentScreen = TITLE;
                }
            break;
            }

            case TITLE:
            {
                if (IsKeyPressed(KEY_ENTER))
                {
                    currentScreen = GAMEPLAY;
                }
            break;
            } 

            case GAMEPLAY:
            {
                if (IsKeyPressed(KEY_ENTER))
                {
                    currentScreen = ENDING;
                }
            break;
            }

            case ENDING:
            {
                if (IsKeyPressed(KEY_ENTER))
                {
                    currentScreen = TITLE;
                }
            break;
            } 
            default: break;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        switch(currentScreen)
        {
            case LOGO:
            {
                DrawText("LOGO SCREEN", 20, 20, 40, LIGHTGRAY);
                DrawText("Wait for two seconds...", 290, 220, 20 ,GRAY);
            }
            break;

            case TITLE: 
            {
                DrawRectangle(0,0,screenWidth, screenHeight, GREEN);
                DrawText("TITLE SCREEN", 20, 20, 40, DARKGREEN);
                DrawText("PRESS ENTER to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKGREEN);
            }
            break;

            case GAMEPLAY:
            {
                DrawRectangle(0, 0, screenWidth, screenHeight, PURPLE);
                DrawText("GAMEPLAY SCREEN", 20, 20, 40, MAROON);
                DrawText("PRESS ENTER to JUMP to ENDING SCREEN",130, 220, 20, MAROON);
                
            }
            break;
            
            case ENDING:
            {
                DrawRectangle(0,0, screenWidth, screenHeight, BLUE);
                DrawText("ENDING SCREEN", 20, 20, 40, DARKBLUE);
                DrawText("PRESS ENTER to RETURN to TITLE SCREEN",120, 220, 20 ,DARKBLUE);
            }     
            break;

            default: break;
        }
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}

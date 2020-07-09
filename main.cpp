
#include "raylib.h"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 340;
    const int screenHeight = 340;

    InitWindow(screenWidth, screenHeight, "Keylistener");
    Texture2D arrowLeft = LoadTexture("left.png");
    Texture2D arrowRight = LoadTexture("right.png");
    SetTargetFPS(120);              
    while (!WindowShouldClose())    
    {
        
       
        BeginDrawing();
            

            ClearBackground(GRAY);
            //e
            if(!IsKeyDown(KEY_E)){
            DrawRectangle(10,10,100,100,WHITE);
            }else{
            DrawRectangle(10,10,100,100,SKYBLUE); 
            }
            //r
            if(!IsKeyDown(KEY_R)){
            DrawRectangle(120,10,100,100,WHITE);
            }else{
            DrawRectangle(120,10,100,100,SKYBLUE);
            }
            //left
            if(!IsKeyDown(KEY_LEFT)){
            DrawRectangle(10,230,100,100,WHITE);
            }else{
            DrawRectangle(10,230,100,100,SKYBLUE);
            }
            //right
            if(!IsKeyDown(KEY_RIGHT)){
            DrawRectangle(230,230,100,100,WHITE);
            }else{
            DrawRectangle(230,230,100,100,SKYBLUE);
            }
            //cam3
            if(!IsKeyDown(KEY_DOWN)){
            DrawRectangle(120,230,100,100,WHITE);
            }else{
            DrawRectangle(120,230,100,100,SKYBLUE);
            }
            
            if(!IsKeyDown(KEY_UP)){
            DrawRectangle(120,120,100,100,WHITE);
            }else{
            DrawRectangle(120,120,100,100,SKYBLUE);
            }
            
            DrawText("E",30,15,100,BLACK);
            DrawText("R",135,15,100,BLACK); 
            DrawText("Cam1",132,150,35,BLACK);
            DrawText("Cam3",132,260,35,BLACK);            
            DrawTextureEx(arrowLeft, Vector2{25, 255}, 0.0, 0.1, RAYWHITE);
            DrawTextureEx(arrowRight, Vector2{250, 255}, 0.0, 0.1, RAYWHITE);
            
                
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
#include <raylib.h>
#include "modules/player/player.h"


int main()
{
    Player* player = new Player();

    Color darkGreen = Color{20, 160, 133, 255};

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Dapper Dasher");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkGreen);
        player->Update();
        player->Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

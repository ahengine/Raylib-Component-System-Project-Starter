#include <raylib.h>
#include "player.h"


int main()
{
    Player player = Player();

    Color darkGreen = Color{20, 160, 133, 255};

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Entity Component System");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkGreen);
        player.Update();
        player.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

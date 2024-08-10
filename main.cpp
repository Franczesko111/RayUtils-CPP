#include "source/PCH.hpp"

int main()
{
    InitWindow(1280, 720, "RayUtils");
    SetTargetFPS(60);

    while(WindowShouldClose() == false)
    {
        BeginDrawing();

        ClearBackground(LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
#include "raylib.h"
#include "math.h"

void runWindow(void)
{
    InitWindow(800, 450, "Calculator");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            int result = add(5, 10);

            DrawText(TextFormat("Result: %d", result),
                     300, 200, 30, BLACK);

        EndDrawing();
    }

    CloseWindow();
}
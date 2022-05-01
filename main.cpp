#include <iostream>
#include "raylib.h"

int main() {
  InitWindow(600, 600, "ligma");
  while(!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    for (int column = 0; column < 8; ++column) {
      for (int brick = 0; brick < 2; ++brick) {
        DrawRectangle(column * 55 + brick * 15, brick * 35, 50, 30, MAROON);
      }
    }

    EndDrawing();
  }
}

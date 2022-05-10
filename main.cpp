#include <iostream>
#include "raylib.h"

int main() {
  InitWindow(600, 600, "ligma");
  auto ye = LoadTexture("images/ye.png");
  auto stick = LoadImage("images/fishstick_5.png");
  const float scaleNumber = 0.4;
  ImageResize(&stick, stick.width * scaleNumber, stick.height * scaleNumber);
  auto stickTexture = LoadTextureFromImage(stick);

  int x = 500;
  int y = 500;
  int velocity = -1;

  while(!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    if (x < 180 || x > 600) {
      velocity = velocity * -1;
    }

    x = x + velocity;
    y = y + velocity;

    DrawTexture(ye, 0, 0, RAYWHITE);
    DrawTexture(stickTexture, x, y, RAYWHITE);

    EndDrawing();
  }
}

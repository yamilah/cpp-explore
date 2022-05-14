#include <iostream>
#include "raylib.h"

struct Collectible {
  float x;
  float y;
  Texture2D texture;

  Collectible() {
    auto stick = LoadImage("images/fishstick_5.png");
    const float scaleNumber = 0.3;
    ImageResize(&stick, stick.width * scaleNumber, stick.height * scaleNumber);
    texture = LoadTextureFromImage(stick);
  }

  void draw() {
    DrawTexture(texture, x, y, RAYWHITE);
  }
};

struct Player {
  const float speed = 0.5;

  float x;
  float y;
  Texture2D def;
  Texture2D hungie;

  Player() {
    def = LoadTexture("images/ye_def.png");
    hungie = LoadTexture("images/ye_hungie.png");
  }

  void update(const Collectible& fishstick) {
    if (IsKeyPressed(KEY_R)) {
      x = 0;
      y = 0;
    }

    if (std::abs(fishstick.x - x) <= 210 && std::abs(fishstick.y - y) <= 210) {
      DrawTexture(hungie, x, y, RAYWHITE);
    } else {
      DrawTexture(def, x, y, RAYWHITE);
    }

    if (IsKeyDown(KEY_LEFT) && x > 0) {
      x -= speed;
    }

    if (IsKeyDown(KEY_RIGHT) && x < 400) {
      x += speed;
    }

    if (IsKeyDown(KEY_DOWN) && y < 400) {
      y += speed;
    }

    if (IsKeyDown(KEY_UP) && y > 0) {
      y -= speed;
    }
  }
};

int main() {
  InitWindow(600, 600, "ligma");

  Player ye;
  Collectible fishstick;

  while(!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    ye.update(fishstick);
    fishstick.draw();

    EndDrawing();
  }
}

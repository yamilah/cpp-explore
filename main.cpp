#include <iostream>
#include "function.h"
#include "raylib.h"

int main() {
  Person* people = new Person[9999999];

  InitWindow(600, 600, "ligma");
  while(!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    EndDrawing();
  }

  Person p;
  p.SetAge(22);
  p.SetName("j");
  p.PrintInformation();

  Person b;
  if (p.IsCompatible(&b)) {
    std::cout << "boolin" << std::endl;
  } else {
    std::cout << p.GetName() << " is an old fart." << std::endl;
  }
  return 0;
}

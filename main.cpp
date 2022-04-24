#include <iostream>
#include "function.h"

int main() {
  Person p;
  p.SetAge(22);
  p.SetName("j");
  p.PrintInformation();

  Person b;
  if (p.IsCompatible(b)) {
    std::cout << "boolin" << std::endl;
  } else {
    std::cout << p.GetName() << " is an old fart." << std::endl;
  }
  return 0;
}

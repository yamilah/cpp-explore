#pragma once
#include <string>

class Person {
  std::string name;
  int age = 18;

public:
  void PrintInformation();
  void SetAge(int age);
  void SetName(std::string name);
  std::string GetName();
  bool IsCompatible(Person p);
};

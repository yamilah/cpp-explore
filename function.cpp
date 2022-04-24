#include "function.h"
#include <iostream>

void Person::PrintInformation() {
  std::string result;
  result += "Name: " + name;
  result += "\nAge: " + std::to_string(age);
  std::cout << result << std::endl;
}

void Person::SetAge(int a) {
  if (a >= 18) {
    age = a;
  }
}

void Person::SetName(std::string n) {
  name = n;
}

std::string Person::GetName() {
  return name;
}

bool Person::IsCompatible(Person other) {
  if (other.age - age > 5 || other.age - age < -5) {
    return false;
  } else {
    return true;
  }
}

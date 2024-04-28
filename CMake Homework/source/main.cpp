#include <iostream>
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

int main(){
  int a = 1, b = 3;
  std::cout << "Addition: " << a << " + "  << b << " = " << add(a, b) << std::endl;
  std::cout << "Subtraction: " << b << " - "  << a << " = " << sub(b, a) << std::endl;
  float c = 4, d = 20;
  std::cout << "Division: " << c << " / "  << d << " = " << div(c, d) << std::endl;
  std::cout << "Multiplication: " << d << " * "  << c << " = " << multiply(c, d) << std::endl;
}

#include <iostream>
#include "fibonacci.h"
int main(int argc, char const *argv[])
{

  for (int i = 0; i < 10; i++)
  {
    std::cout << fibonacci(i) << std::endl;
  }

  system("pause");
  return 0;
}
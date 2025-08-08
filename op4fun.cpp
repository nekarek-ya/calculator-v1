#include <iostream>
#include <limits>

int main()
{
  char operation {};
  float a,b,result;
  while (true)
  {
    std::cout << "write num1: ";
    std::cin >> a;
    
    if (operation == 'q') return 0;

    if (std::cin.fail()) {
    std::cin.clear(); // сброс ошибки
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "ure leaved this programm.\n";
    continue;
    }

    std::cout << "write op (+, -, *, / or write: 'q' or 'Q' too quit this programm): ";
    std::cin >> operation;

    if (std::cin.fail()) {
    std::cin.clear(); // сброс ошибки
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "ure leaved this programm).\n";
    continue;
        }

    std::cout << "write num2: ";
    std::cin >> b;

    if (operation == '+') result = a + b;
    else if (operation == '-') result = a - b;
    else if (operation == '*') result = a * b;
    else if (operation == '/') {
      if (b == 0) {
      std::cout << "Can't divide by zero!\n";
      continue;
    }
    result = a / b;
    }
    else {
      std::cout << "Unknown operation.\n";
      continue;
    }
    std::cout << "Your answer: " << result << "\n";
  }
  return 0;
}
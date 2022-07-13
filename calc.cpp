#include <iostream>
#include <conio.h>

int main() {
 
  double answer;
  int select;
  int Num1;
  int Num2;
 
  std::cout << "\nSelect the operation you would like to use:\n\n";
  std::cout << "   1. +   2. -\n";
  std::cout << "   3. X   4. /\n\n";
  std::cin >> select;

  std::cout << "Enter the first number\n";
  std::cin >> Num1;
  std::cout << "Enter the second number\n";
  std::cin >> Num2;
 
  if (select == 1) {
	
    answer = Num1 + Num2;
    std::cout << "\nYour Answer is: " << answer << "\n";
    system("pause");
    
 
  } else if (select == 2) {
 
    answer = Num1 - Num2;
    std::cout << "\nYour Answer is: " << answer << "\n";
    system("pause");
 
  } else if (select == 3) {
 
    answer = Num1 * Num2;
    std::cout << "\nYour Answer is: " << answer << "\n";
    system("pause");
 
  } else if (select == 4) {
 
    answer = Num1 / Num2;
    std::cout << "\nYour Answer is: " << answer << "\n";
    system("pause");
 
  } 
 
  }
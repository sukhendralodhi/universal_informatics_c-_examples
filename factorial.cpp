#include <iostream>
using namespace std;
int factorial( int number) {
int fact = 1;
   for (int i = 1; i <= number; i++) {
    fact = fact * i;
  }
  return fact;
}

int main() {

  int number;
  cout << "Enter the number: ";
  cin >> number;

  int result = factorial(number);

  cout << "Factorial of " << number << " = " << result << endl;
}
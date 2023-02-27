#include <iostream>
using namespace std;

int main() {
  double i, sum = 0.0;
  int number;
  cout << "Enter the number: ";
  cin >> number;

  for (i = 1; i <= number; ++i) {

    sum = sum + 1 / i;
  }

  cout << sum << endl;
}
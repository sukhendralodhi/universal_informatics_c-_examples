#include <iostream>
using namespace std;

void printTable(int number) {
  for (int i = 1; i <= 10; i++) {

    cout << number << " * " << i << " = " << number * i << endl;
  }
}

int main() {
  int num;

  cout << "Enter the number: ";
  cin >> num;

  printTable(num);
}
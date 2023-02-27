#include <iostream>
using namespace std;

// int getSum(int number) {
//   int sum;
//   for(sum = 0; number > 0; sum += number % 10, number /= 10);
//   return sum;
// }

int main() {
  int number, reminder, sum = 0;

  cout << "Enter the number: ";
  cin >> number;
  int original = number;

  // int result = getSum(number);

  // cout << result << endl;

  while (number != 0) {
    reminder = number % 10;
    sum = sum + reminder;
    number = number / 10;
  }

  cout << "Sum of " << original << " = " << sum << endl;
}
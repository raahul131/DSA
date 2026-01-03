#include <iostream>
using namespace std;

int countDigit(long long number) {
  int count = 0;
  while (number > 0) {
    int lastDigit = number % 10;
    count = count + 1;
    number = number / 10;
  }
  return count;
}

int main() {

  long long number;
  cin >> number;

  int result = countDigit(number);
  cout << "total digits are : " << result;

  return 0;
}
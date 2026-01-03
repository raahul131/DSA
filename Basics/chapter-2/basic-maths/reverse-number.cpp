#include<iostream>
using namespace std;

int reverseNumber(int number){
  int reversedNumber = 0;
  while(number > 0){
    int lastDigit = number % 10;
    number = number / 10;

    reversedNumber = (reversedNumber * 10) + lastDigit;
  }

  return reversedNumber;
}

int main() {

  int number;
  cin >> number;

  int result = reverseNumber(number);
  cout << "Reversed Number is :: " << result;

  return 0;
}
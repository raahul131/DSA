#include <iostream>
using namespace std;

void printDivisors(int number){
  for (int i = 1; i*i <= number; i++){
    if(number % i == 0){
      cout << i << " ";

      if(i != number/i){
        cout << number/i << " ";
      }
    }
  }
}

int main () {

  int number;
  cin >> number;

  printDivisors(number);

  return 0;
}
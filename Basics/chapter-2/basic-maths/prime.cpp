#include<iostream>
using namespace std;

bool primeNumber(int number){
  int count = 0;
  for(int i = 0; i*i <= number; i++){
    if(number % i == 0){
      count++;

      if(i != number/i){
        count++;
      }
    }
  }

  if(count == 2){
    return true;
  }

  return false;
}

int main (){

  int number;
  cin >> number;

  int result = primeNumber(number);

  cout << "Result is :: " << result << endl;

  return 0;
}
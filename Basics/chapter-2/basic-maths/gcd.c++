#include<iostream>
using namespace std;

int gcd(int number1, int number2){

  if (number1 == 0) return number2;
  if (number2 == 0) return number1;

  while(number1 > 0 && number2 > 0){
    if(number1 > number2){
      number1 = number1 % number2;
    }else{
      number2 = number2 % number1;
    }
  }

  if( number1 == 0){
     return number2;
  }
    
  return number1;
  

}

int main (){

  int number1, number2;

  cin >> number1 >> number2;

  int result = gcd(number1, number2);

  cout << "gcd is: " << result;

  return 0;
}
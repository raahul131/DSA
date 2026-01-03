// #include<iostream>
// using namespace std;

// int checkPalindrome (int number){
//   int reversed = 0;
//   while(number > 0){
//     int lastDigit = number % 10;

//     number = number /10;
//     reversed = (reversed * 10) + lastDigit;
//   }
//   return reversed;
// }

// int main () {

//   int number;
//   cin >> number;

//   int result = checkPalindrome(number);

//   if(result == number){
//     cout << "Number is palindrome";
//   }else{
//     cout << "Number is not palindrome";
//   }


//   return 0;
// }

#include<iostream>
using namespace std;

bool checkPalindrome (int number){
  int duplicateNumber = number;
  int reversed = 0;
  
  while(number > 0){
    int lastDigit = number % 10;
    number = number /10;
    reversed = (reversed * 10) + lastDigit;
  }

  if (reversed == duplicateNumber) {
    return true;
  }

  return false;
}

int main () {

  int number;
  cin >> number;

  int result = checkPalindrome(number);

  cout << result;

  return 0;
}
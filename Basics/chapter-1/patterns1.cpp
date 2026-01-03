#include <iostream>
using namespace std;

int countDigit(double number) {
  int count = 0;
  while (number > 0) {
    int lastDigit = number / 10;
    count = count + 1;
    number = number / 10;
  }
  return count;
}

int main() {

  int number;
  cin >> number;

  int result = countDigit(number);
  cout << "total digits are : " << result;

  return 0;
}

// #include <iostream>
// using namespace std;

// void pattern(int number) {
//   for (int row = 0; row < number; row++){
//     for(int column = 0; column < number; column++){
//       cout << "* ";
//     }
//     cout << endl;
//   }
// };

// void pattern1(int number) {
//   for (int row = 0; row < number; row++) {

//   }
// }

// int main () {

//   int number;
//   cin >> number;

//   pattern(number);

//   return 0;
// }
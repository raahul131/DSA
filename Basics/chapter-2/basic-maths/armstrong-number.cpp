#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool armstrongNumber(int number) {
    int duplicateNumber = number;
    int digits = countDigits(number);
    int sum = 0;

    while (number > 0) {
        int lastDigit = number % 10;
        sum += power(lastDigit, digits);
        number /= 10;
    }

    return sum == duplicateNumber;
}

int main() {
    int number;
    cin >> number;

    cout << armstrongNumber(number);
    return 0;
}

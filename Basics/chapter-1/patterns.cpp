#include<iostream>
using namespace std;

void pattern1 (int n) {
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column ++){
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern2 (int n) {
    for (int row = 0; row < n; row++) {
        for (int column = 0; column <= row; column ++){
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern3 (int n) {
    for (int row = 0; row <= n; row++) {
        for (int column = 1; column <= row; column ++){
            cout << column << " ";
        }
        cout << endl;
    }
}
void pattern4 (int n) {
    for (int row = 0; row <= n; row++) {
        for (int column = 1; column <= row; column ++){
            cout << row << " ";
        }
        cout << endl;
    }
}
void pattern5 (int n) {
    for (int row = 0; row <= n; row++) {
        for (int column = 0; column < n-row+1; column++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6 (int n) {
    for (int row = 0; row <= n; row++) {
        for (int column = 1; column < n-row+1; column++){
            cout << column << " ";
        }
        cout << endl;
    }
}
void pattern7 (int n) {
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n-row-1; column++){
            cout << " ";
        }
        for (int column = 0; column < 2*row+1; column++){
            cout << "*";
        }
         for (int column = 0; column < n-row-1; column++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8 (int n) {
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < row; column++){
            cout << " ";
        }
        for (int column = 0; column < 2*n -(2*row+1); column++){
            cout << "*";
        }
         for (int column = 0; column < row; column++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9 (int n) {
    for(int row = 0; row <= 2*n-1; row++){
        int stars = row;
        if(row > n) {
            stars = 2*n-row;
        }
        for(int column = 1; column <= stars; column++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern10 (int n){
    int start = 1;
    for(int row = 0; row < n; row++){
        if(row % 2 == 0) start = 1;
        else start = 0;
        for (int column = 0; column <= row; column++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern11 (int n ){
    for (int row = 0; row < n; row++){
        for (int column = 0; column < row; column++){
            cout << column+1 << " ";
        }
        cout << endl;
    }
}
void pattern12 (int n ){
    int space = 2*(n-1);

    for (int row = 1; row <= n; row++){
        // numbers
        for (int column = 1; column <= row; column++){
            cout << column;
        }

        // spaces
        for(int column = 1; column <= space; column++){
            cout << " ";
        }

        // numbers
        for (int column = row; column >= 1; column--){
            cout << column;
        }

        cout << endl;
        space -= 2;
    }
}
void pattern13 (int n) {
    int count = 1;
    for(int row = 0; row <= n; row++){
        for (int column = 0; column <= row; column++){
            cout << count << " ";
            count = count+1;
        }
        cout << endl;
    }
}
void pattern14 (int n) {
    for(int row = 0; row <= n; row++){
        for (char ch = 'A'; ch <= 'A' + row; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15 (int n) {
    for(int row = 0; row <= n; row++){
        for (char ch = 'A'; ch <= 'A' + (n-row-1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16 (int n) {
    char chr = 'A';
    for(int row = 0; row <= n; row++){
        for (int column = 0; column <= row; column++){
            cout << chr << " ";
        }
        cout << endl;
        chr++;
    }
}
  
int main () {

    int n;
    cin >> n;

    pattern16(n);
    return 0;
}
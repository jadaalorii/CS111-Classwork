#include <iostream>
using namespace std;
int main () { 
  int num;
  cout << "Enter a positive number: ";
  cin >> num;
  if ( num <= 0 ) {
    cout << "Invalid input. Program will terminate. " << endl;
    return 1;
  }
  cout << "Table of numbers and their sums: " << endl;
        for (int i = 1; i <= num; ++i) {
          int sum = 0;
          cout << "Line " << i << " : ";
          for (int j = 1; j <= i; ++j) {
            cout << j;
            sum += j;
            if (j < i) {
              cout << ", ";
            }
          }
            cout << " | Sum: " << sum << endl;
          } 
          return 0; 
        } 

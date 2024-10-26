#include <iostream>
using namespace std;
int main () {
  int number;
  int evenCount = 0;
  int oddCount = 0;
  cout << "Enter integers between 1 and 100 (enter 0 to stop): " << endl;
  while (true) { 
    cin >> number;
    if (number == 0) {
      break;
   }
    if (number < 1|| number > 100) {
      cout << "Please enter a number between 1 and 100." << endl;
      continue;
    }
    if ( number % 2 == 0) { 
      evenCount++;
    }
    else {
      oddCount++;
    }
  }
cout << "Even numbers count: " << evenCount << endl;
cout << "Odd numbers count: " << oddCount << endl;
return 0;
}

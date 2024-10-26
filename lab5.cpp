#include <iostream>
using namespace std;
int main () {
  int a, b, c;
   // Prompt the user for three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Compare the numbers and print the result
    if (a < b && b < c) {
        cout << "increasing" << endl;
    } else if (a > b && b > c) {
        cout << "decreasing" << endl;
    } else {
        cout << "neither" << endl;
    }

    return 0;
}

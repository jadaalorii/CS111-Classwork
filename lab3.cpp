#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter two integer values: ";
    cin >> x >> y;
    
    cout << "The sum of x and y is: " << (x + y) << endl;
    cout << "y subtracted from x is: " << (x - y) << endl;
    cout << "The product of x and y is: " << (x * y) << endl;
    cout << "The average of x and y is: " << ((x + y) / 2) << endl;

    if (y != 0) {
    cout << "The remainder when x is divided by y is: " << (x % y) << endl;
    } else {
    cout << "Cannot compute remainder when y is zero." << endl;
    }

    return 0;
}


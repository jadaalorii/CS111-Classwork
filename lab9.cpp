#include <iostream>
using namespace std;
int main () {
  int num;
  cout << "Enter a postive integer greater than 10: ";
  cin >> num;
  while (num <= 10) {
    cout << "Invalid input. Please enter a postive integer greater than 10: ";
    cin >> num;
  }
  for (int i = 1; i <= num; ++i) {
        if (i % 3 == 0 && i % 4 == 0) {
            cout << "FuzzyCat" << endl;
        } else if (i % 3 == 0) {
            cout << "Fuzzy" << endl;
        } else if (i % 4 == 0) {
            cout << "Cat" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}


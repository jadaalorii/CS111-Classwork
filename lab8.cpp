#include <iostream> 
using namespace std;
int main () { 
  int num;
  cout << "Enter a number greater than 100: ";
  cin >> num;
  if (num <=100) {
    cout << "The number must be greater than 100. " << endl;
  } else { 
    cout << "Integer  Square" << endl;
        cout << "------------------" << endl;
        for (int i = 1; i * i < num; ++i) {
            cout << i << "       " << (i * i) << endl;
        }
    }

    return 0;
}

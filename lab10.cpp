#include <iostream>
using namespace std;
int main () {
  int num;
  cout <<"Enter an odd postive integer: ";
  cin >> num;
  if(num<= 0|| num % 2 == 0) {
    cout <<"Invalid input. The program will terminate. " << endl;
   return 1;
  } for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            if (j == i && i != num / 2) {
                cout << '+'; 
            } else if (j == num - 1 - i && i != num / 2) {
                cout << 'x'; 
            } else if (i == num / 2 && j == num / 2) {
                cout << '*';
            } else {
                cout << ' '; 
            }
        }
        cout << endl;
    }

    return 0;
}

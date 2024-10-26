#include <iostream> 
using namespace std;
int main () { 
  int num;
  cout << "Enter a non negative integer: ";
  cin >> num;

  while (num < 0) { 
    cout << "Invalid input. Please enter a non negative integer: ";
    cin >> num;
  } 
  cout << "The factors of " << num << " are: ";
 
  for (int factor = 1; factor <=num; ++factor) { 
   if ( num % factor == 0) { 
    cout << factor << " "; 
   } 
  } 
 cout << endl;
 return 0;
}

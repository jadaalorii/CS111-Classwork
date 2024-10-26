#include <iostream> 
using namespace std;
int main () {
  // declare a double variable named price 

  double price;
  double discounted_price;
  cout << "What is the orginal price:  ";
  cin >> price;

  if( price <= 100) {
      discounted_price = price * 0.80; // 20% disscount 
       cout << "That qualifies for a 20% discount.";
  } else {
       discounted_price = price * 0.60; // 40% discount 
       cout << "That qualifies for a 40% discount." << endl;
  } 
  
  // Print the discounted price
   cout << "The discounted price is: $" << discounted_price << endl;
   return 0;
}

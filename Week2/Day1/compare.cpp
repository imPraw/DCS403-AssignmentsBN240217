#include <iostream>
using namespace std;

int main() {
   int x = 10;
   int y = 5;
   if (x > y) {
       cout << x << " is greater than " << y << "." << endl;
   } else if (x < y) {
       cout << x << " is less than " << y << "." << endl;
   } else {
       cout << x << " is equal to " << y << "." << endl;
   }
}
#include <iostream>
using namespace std;

int main() {
   int num;
   cout << "enter a number: ";
   cin >> num;
if (num > 0){
   if (num % 2 == 0){
    cout << "number is positive and even";
   }
   else
   cout << "number is positive and odd";
}
 else if (num < 0) {
        cout << " number is Negative.";
    } 
    else {
        cout << " number is Zero.";
    }

    return 0;
}
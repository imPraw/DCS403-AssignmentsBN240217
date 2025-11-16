#include <iostream>
using namespace std;

int main() {
   int mark = 85;
   if (mark >= 80) {
       cout << "Grade: A" << endl;
   } else if (mark >= 60) {
       cout << "Grade: B" << endl;
   } else if (mark >= 40) {
       cout << "Grade: C" << endl;
   } else {
       cout << "Grade: F" << endl;
   }
}
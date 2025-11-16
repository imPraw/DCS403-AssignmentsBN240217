#include <iostream>
using namespace std;

int main() {
   int a = 10;
   int b = 12;
   int small = (a < b) ? a : b;
   cout <<"smallest is "<< small << endl;
   return 0;
}
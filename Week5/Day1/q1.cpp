#include <iostream>
using namespace std;

void printNum(int n) {
    if(n == 0) return;
    printNum(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Output: ";
    printNum(n);
}

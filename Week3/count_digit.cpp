#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    do {
        n = n / 10;
        count++;
    } while (n > 0);

    cout << "Number of digits = " << count;

    return 0;
}

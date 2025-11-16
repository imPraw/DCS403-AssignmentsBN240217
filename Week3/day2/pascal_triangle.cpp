#include <iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            int value = fact(i) / (fact(j) * fact(i - j));
            cout << value << " ";
        }

        cout << endl;
    }

    return 0;
}

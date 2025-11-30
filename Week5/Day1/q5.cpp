#include <iostream>
using namespace std;

int powerTail(int a, int b, int ans) {
    if(b == 0) return ans;
    return powerTail(a, b - 1, ans * a);
}

int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Output: " << powerTail(a, b, 1);
}

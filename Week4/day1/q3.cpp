#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& a) {
    int s = 0;
    for(int x : a) s += x;
    return s;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements:\n";
    for(int i=0;i<n;i++) cin >> a[i];

    cout << "Sum of elements: " << sumArray(a);
    return 0;
}

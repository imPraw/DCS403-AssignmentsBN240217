#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements:\n";
    for(int i=0;i<n;i++) cin >> a[i];

    cout << "Enter number to search: ";
    cin >> x;

    int pos = -1;
    for(int i=0;i<n;i++)
        if(a[i] == x) { pos = i; break; }

    if(pos == -1) cout << "Number not found";
    else cout << "Number found at index " << pos;

    return 0;
}

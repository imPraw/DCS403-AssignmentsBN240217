#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter sorted elements:\n";
    for(int i=0;i<n;i++) cin >> a[i];

    cout << "Enter number to search: ";
    cin >> x;

    int low = 0, high = n-1, pos = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(a[mid] == x) { pos = mid; break; }
        else if(x > a[mid]) low = mid + 1;
        else high = mid - 1;
    }

    if(pos == -1) cout << "Number not found";
    else cout << "Number found at index " << pos;

    return 0;
}

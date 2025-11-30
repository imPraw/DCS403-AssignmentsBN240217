#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int>& arr, int i, int n) {
    if(i == n) return;
    cout << arr[i] << " ";
    printArr(arr, i + 1, n);
}
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Output: ";
    printArr(arr, 0, n);
}


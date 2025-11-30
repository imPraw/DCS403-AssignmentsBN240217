#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    cout << "Enter 9 numbers:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    cout << "Row sums: ";
    for(int i=0;i<3;i++){
        int s=0;
        for(int j=0;j<3;j++) s+=a[i][j];
        cout << s << " ";
    }
    cout << "\nColumn sums: ";
    for(int j=0;j<3;j++){
        int s=0;
        for(int i=0;i<3;i++) s+=a[i][j];
        cout << s << " ";
    }
}

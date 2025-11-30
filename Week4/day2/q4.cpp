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
    cout << "Largest in each row: ";
    for(int i=0;i<3;i++){
        int m = a[i][0];
        for(int j=1;j<3;j++){
            if(a[i][j] > m) m = a[i][j];
        }
        cout << m << " ";
    }
}

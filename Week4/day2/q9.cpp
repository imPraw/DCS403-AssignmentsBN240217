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
    bool sym = true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j] != a[j][i]) {
                sym = false;
                break;
            }
        }
        if(!sym) break;
    }
    if(sym) cout << "Symmetric";
    else cout << "Not symmetric";
}

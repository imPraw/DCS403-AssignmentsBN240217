#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        int m=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[m]) m=j;
        swap(a[i],a[m]);
    }
}

int main() {
    int a[]={5,2,9,1,3};
    int n=5;
    selectionSort(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

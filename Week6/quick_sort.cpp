#include <iostream>
using namespace std;

int partitionArr(int a[], int l, int r) {
    int p=a[l], i=l+1, j=r;
    while(true) {
        while(i<=r && a[i]<=p) i++;
        while(a[j]>p) j--;
        if(i>=j) break;
        swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
}

void quickSort(int a[], int l, int r) {
    if(l<r) {
        int p=partitionArr(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}

int main() {
    int a[]={5,2,9,1,3};
    int n=5;
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

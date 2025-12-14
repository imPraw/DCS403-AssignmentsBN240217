#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int front = 0, rear = 4;

    if (front == -1)
        cout << "Empty\n";
    else
        cout << "Not Empty\n";

    if ((rear + 1) % SIZE == front)
        cout << "Full";
    else
        cout << "Not Full";
}

#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int q[SIZE];
    int front = 0, rear = 0;

    if ((rear + 1) % SIZE == front)
        cout << "Queue Full";
    else {
        q[rear] = 10;
        rear = (rear + 1) % SIZE;
        q[rear] = 20;
    }

    int i = front;
    while (i != rear) {
        cout << q[i] << " ";
        i = (i + 1) % SIZE;
    }
    cout << q[rear];
}

#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int q[SIZE] = {10, 20, 30};
    int front = 0, rear = 2;

    if (front == -1)
        cout << "Queue Empty";
    else
        front = (front + 1) % SIZE;

    int i = front;
    while (i != rear) {
        cout << q[i] << " ";
        i = (i + 1) % SIZE;
    }
    cout << q[rear];
}

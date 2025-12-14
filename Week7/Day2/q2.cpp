#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int q[SIZE];
    int front = 0, rear = 1;

    q[0] = 10;
    q[1] = 20;

    if (rear == SIZE - 1)
        cout << "Queue Full";
    else {
        rear++;
        q[rear] = 30;
    }

    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
}

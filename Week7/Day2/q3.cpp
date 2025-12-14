#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int q[SIZE] = {10, 20, 30};
    int front = 0, rear = 2;

    if (front == -1 || front > rear)
        cout << "Queue Empty";
    else
        front++;

    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
}

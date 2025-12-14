#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int q[SIZE];
    int front = -1, rear = -1;

    rear++;
    q[rear] = 10;
    front = 0;

    rear++;
    q[rear] = 20;

    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
}

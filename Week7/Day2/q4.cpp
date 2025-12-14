#include <iostream>
using namespace std;

int main() {
    int q[5] = {5, 10, 15};
    int front = 0, rear = 2;

    if (front == -1 || front > rear)
        cout << "Queue Empty";
    else
        cout << q[front];
}

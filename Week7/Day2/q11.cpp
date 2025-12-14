#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int q[SIZE] = {1, 2, 3, 4};
    int front = 1, rear = 3;

    int i = front;
    while (true) {
        cout << q[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
}

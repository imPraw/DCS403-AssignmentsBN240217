#include <iostream>
using namespace std;

int main() {
    int q[5] = {1, 2, 3, 4};
    int front = 0, rear = 3;

    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
}

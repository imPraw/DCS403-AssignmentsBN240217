#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    for (int i = 0; i < n; i++) {
        Node* temp = new Node();
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }

    int x = 30;
    Node* curr = head;
    int pos = 1;
    bool found = false;

    while (curr != NULL) {
        if (curr->data == x) {
            cout << pos;
            found = true;
            break;
        }
        curr = curr->next;
        pos++;
    }

    if (!found)
        cout << "Not found";
}

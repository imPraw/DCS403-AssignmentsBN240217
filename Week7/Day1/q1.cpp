#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        Node* temp = new Node();
        temp->data = arr[i];
        temp->next = NULL;

        if (head == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    int arr[] = {10, 20, 30, 40};
    for (int i = 3; i >= 0; i--) {
        Node* temp = new Node();
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }

    int pos = 2;

    if (pos == 1) {
        head = head->next;
    } else {
        Node* curr = head;
        for (int i = 1; i < pos - 1; i++)
            curr = curr->next;

        curr->next = curr->next->next;
    }

    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

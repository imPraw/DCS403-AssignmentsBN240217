#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    int arr[] = {1, 2, 3, 4};
    for (int i = 3; i >= 0; i--) {
        Node* temp = new Node();
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }

    int x = 3;

    if (head->data == x) {
        head = head->next;
    } else {
        Node* curr = head;
        while (curr->next != NULL && curr->next->data != x)
            curr = curr->next;

        if (curr->next != NULL)
            curr->next = curr->next->next;
    }

    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

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

    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

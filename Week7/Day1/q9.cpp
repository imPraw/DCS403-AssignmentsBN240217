#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    int arr[] = {1, 2, 4};
    for (int i = 2; i >= 0; i--) {
        Node* temp = new Node();
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }

    int x = 2;
    int y = 3;

    Node* curr = head;
    while (curr != NULL && curr->data != x)
        curr = curr->next;

    if (curr != NULL) {
        Node* temp = new Node();
        temp->data = y;
        temp->next = curr->next;
        curr->next = temp;
    }

    curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

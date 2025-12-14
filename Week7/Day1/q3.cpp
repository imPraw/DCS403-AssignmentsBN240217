#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    Node* a = new Node();
    a->data = 1;
    a->next = NULL;
    head = a;

    Node* b = new Node();
    b->data = 2;
    b->next = NULL;
    a->next = b;

    Node* temp = new Node();
    temp->data = 3;
    temp->next = NULL;

    Node* curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    curr->next = temp;

    curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    Node* a = new Node();
    a->data = 2;
    a->next = NULL;
    head = a;

    Node* b = new Node();
    b->data = 3;
    b->next = NULL;
    a->next = b;

    Node* temp = new Node();
    temp->data = 1;
    temp->next = head;
    head = temp;

    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

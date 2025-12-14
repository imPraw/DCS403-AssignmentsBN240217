#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printReverse(Node* head) {
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* head = NULL;

    int arr[] = {1, 2, 3};
    for (int i = 2; i >= 0; i--) {
        Node* temp = new Node();
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }

    printReverse(head);
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    int arr[] = {5, 10, 15};
    for (int i = 2; i >= 0; i--) {
        Node* temp = new Node();
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }

    int count = 0;
    Node* curr = head;

    while (curr != NULL) {
        count++;
        curr = curr->next;
    }

    cout << count;
}

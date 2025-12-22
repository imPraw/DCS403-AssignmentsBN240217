#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int x) {
    Node* n = new Node;
    n->data = x;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

Node* searchIter(Node* root, int key) {
    while (root != nullptr) {
        if (root->data == key)
            return root;
        if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}

int main() {
    Node* root = newNode(20);
    root->left = newNode(10);
    root->right = newNode(30);

    int key = 25;

    if (searchIter(root, key))
        cout << "Key found";
    else
        cout << "Key not found";

    return 0;
}

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

Node* searchRec(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;
    if (key < root->data)
        return searchRec(root->left, key);
    return searchRec(root->right, key);
}

int main() {
    Node* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);

    int key = 5;

    if (searchRec(root, key))
        cout << "Key found";
    else
        cout << "Key not found";

    return 0;
}

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

Node* insertIter(Node* root, int key) {
    if (root == nullptr)
        return newNode(key);

    Node* curr = root;
    Node* parent = nullptr;

    while (curr != nullptr) {
        parent = curr;
        if (key < curr->data)
            curr = curr->left;
        else if (key > curr->data)
            curr = curr->right;
        else
            return root;
    }

    if (key < parent->data)
        parent->left = newNode(key);
    else
        parent->right = newNode(key);

    return root;
}

void inorder(Node* root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;

    root = insertIter(root, 20);
    root = insertIter(root, 10);
    root = insertIter(root, 30);

    inorder(root);
    return 0;
}

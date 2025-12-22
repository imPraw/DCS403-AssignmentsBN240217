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

Node* findMin(Node* root) {
    while (root->left)
        root = root->left;
    return root;
}

Node* findMax(Node* root) {
    while (root->right)
        root = root->right;
    return root;
}

int main() {
    Node* root = newNode(20);
    root->left = newNode(10);
    root->right = newNode(30);

    cout << "Min: " << findMin(root)->data << endl;
    cout << "Max: " << findMax(root)->data << endl;

    return 0;
}

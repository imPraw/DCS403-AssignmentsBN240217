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

Node* insertRec(Node* root, int key) {
    if (root == nullptr)
        return newNode(key);

    if (key < root->data)
        root->left = insertRec(root->left, key);
    else if (key > root->data)
        root->right = insertRec(root->right, key);

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
    int n, x;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insertRec(root, x);
    }

    cout << "Inorder traversal: ";
    inorder(root);

    return 0;
}

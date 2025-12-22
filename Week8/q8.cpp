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

Node* findMin(Node* root) {
    while (root->left)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

Node* searchRec(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;
    if (key < root->data)
        return searchRec(root->left, key);
    return searchRec(root->right, key);
}

int main() {
    Node* root = nullptr;
    int n, x, delKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insertRec(root, x);
    }

    cout << "Enter key to delete: ";
    cin >> delKey;
    root = deleteNode(root, delKey);

    cout << "Enter key to search: ";
    cin >> searchKey;

    if (searchRec(root, searchKey))
        cout << "Key found";
    else
        cout << "Key not found";

    return 0;
}

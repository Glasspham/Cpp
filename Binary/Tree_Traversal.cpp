#include<iostream>
using namespace std;

// Cấu trúc của một nút trong cây
struct Node 
{
    int data;
    Node* left;
    Node* right;
};

// Tính duyệt cây
void treeTraversal(Node* root) 
{
    if(root == NULL)
        return;
    cout << root  -> data << ' '; // Duyệt trước
    treeTraversal(root -> left); // Duyệt trái 
    treeTraversal(root -> right); // Duyệt phải  
}

// Tạo nút mới
Node* newNode(int data)
{
    Node* node = new Node();
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;
    return node;
}

int main() 
{
    Node* root = newNode(1);
    root -> left = newNode(2);
    root -> right = newNode(3);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(5);

    cout << "Duyet cay: ";
    treeTraversal(root);
    cout << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std ;

class Node{
public : 
    int data ;
    Node * left ;
    Node * right ;

    Node(int val){
        data=val ;
        left = right = NULL;
    }
};

void preorder(Node * root){
    if(!root) return ;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node * root){
    if(!root) return ;
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node * root){
    if(!root) return ;
    
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main() {

    Node* root = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);

 
    root->left = n2;
    root->right = n3;

    n2->left = n4;
    n2->right = n5;

    n3->left = n6;
    n3->right = n7;

    cout << "Preorder: ";
    preorder(root);

    cout << "\nInorder: ";
    inorder(root);

    cout << "\nPostorder: ";
    postorder(root);

    return 0;
}

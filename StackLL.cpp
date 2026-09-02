#include <bits/stdc++.h>
using namespace std;

class Node{
public :
    int data ; 
    Node * next ;
    Node(int x){
        data = x; 
        next = NULL ;
    }
};

void push(Node * & top , int item){
    Node * temp = new Node(item);
    temp->next = top ;
    top = temp ;
    
}

int pop(Node* & top){
    if(top == NULL) return -1;
    Node * temp =  top ;
    int item = temp->data ;
    top = top->next ;
    delete temp ;
    return item ;
}

int peek(Node * top){
    if(top == NULL) return -1 ;
    return top->data ;
}

void traverse(Node * top){
    Node * temp = top ; 
    while(temp){
        cout << temp->data <<  " ";
        temp=temp->next ;
    }
    cout << endl ;
}

int main() {
	// your code goes here
	Node * top  = NULL ;
	push(top,10);
	push(top,20);
	push(top,30);
	push(top,40);
	push(top,50);
	pop(top);
	pop(top);
	traverse(top);
	peek(top);
	

}

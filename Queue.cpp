#include<bits/stdc++.h>
using namespace std ;
#define size 10 

class Queue{
public :
    int data[size];
    int front , rear ;
    void initialize(){
        front = rear = -1 ;
    }
    bool isEmpty(){
        return front==-1 ;
    }
    bool isFull(){
        return rear == size-1 ;
    }
    void enque(int item){
        if(isFull()){
            cout << "Queue is full" << endl ;
            return  ;
        }
        if(front == -1){
            front++;
        }rear++ ;
        data[rear] = item ;
    }
    int deque(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        int item = data[front] ;
        if(front == rear) {
            front = rear = -1 ;
        }else{
            front++;
        }
        return item ;
    }
    void traverse(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return ;
        }
        for(int i =  front ; i<=rear ; i++){
            cout << data[i] << " ";
        }
        cout << endl ;
    }
};

int main(){
    Queue Q ;
    Q.initialize() ;
    int ch , info ;
    do{
        cout << "\n 1.Enque" 
             << "\n 2.Deque" 
             << "\n 3.Traverse" 
             << "\n 4.isFull" 
             << "\n 5.isEmpty" 
             << "\n 6.Exit" 
             << endl ;
        cout << "Enter you choice : "    ; 
        cin >> ch ;
        switch(ch){
            case 1 :
                cout << "Enter the item : " ;
                cin >> info ;
                Q.enque(info);
                cout << "Front : " << Q.front << " ";
                cout << "Rear : " << Q.rear << endl;
                break ;
            case 2 :{
                int item = Q.deque();
                cout << "Front : " << Q.front << " ";
                cout << "Rear : " << Q.rear << endl;
                cout << "Removed item : " <<item << endl ;    
                break ;}
            case 3 :
                cout << "Front : " << Q.front << " ";
                cout << "Rear : " << Q.rear << endl;
                Q.traverse() ; 
                break ;   
            case 4 : 
                cout << "Front : " << Q.front << " ";
                cout << "Rear : " << Q.rear << endl;
                cout << (Q.isFull() ? "Queue is Full" : "Queue is Not Full") << endl;
                break ;
            case 5 :
                cout << "Front : " << Q.front << " ";
                cout << "Rear : " << Q.rear << endl;
                cout << (Q.isEmpty() ? "Queue is Empty" : "Queue is Not Empty") << endl;
                break ;
            case 6 : break ;         
            default : break ;

        }
    }while(ch != 6) ; 

    return 0 ;
}


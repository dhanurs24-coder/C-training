//Circualar Singly Linked List
//write program to create a SLL and insert elemet at beginning and check wheather it is circular linked list or not if not make it into circular linked list

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next = nullptr;
    }

};

class cll{
    public:
    Node *head;
    cll(){
        this->head = nullptr;
    }
    void insert_at_end(int data){
        Node *newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            head->next = head;                                       //point to itself
            return;
        }
        Node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

        void insert_at_beginning(int data){
        Node *newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            head->next = head;                                       //point to itself
            return;
        }
        Node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }

/*
    void display(){
        Node *temp = head;
        cout<<temp->data<<" -> ";
        while(temp->next != head){
            temp = temp->next;   
            cout<<temp->data<<" -> "; 
        }
        cout<<"head"<<endl;
    }
*/
    void display(){
        if(head == nullptr){
            cout<<"List is empty"<<endl;
            return;
        }
        Node *temp = head;
        do{
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }while(temp != head);
        cout<<"head"<<endl;
    
}
void delete_at_beginning(){
        if(head == nullptr){
            cout<<"List is empty ,nothing to delete"<<endl;
            return;        
            }
       if(head->next == head){ //only one node
        cout<<"deleted element is "<<head->data<<endl;
        delete head;
        head = nullptr;
        return;
       }

        Node *temp = head;
        while(temp->next != head){
            temp = temp->next;
        }

        Node *toDelete = head;
        temp->next = head->next;
        head = head->next;
        cout<<"deleted element is "<<toDelete->data<<endl;
        delete toDelete;

}
void delete_at_end(){
    if(head == nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head->next == head){
        cout<<"delete node:"<<head->data<<endl;
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    Node *prev = nullptr;
    while(temp->next != head){
        prev = temp;
        temp = temp->next;
    }
    prev->next = head;
    cout<<"deleted node is :"<<temp->data<<endl;
    delete temp;
}
};

int main(){
    cll ob;
    ob.insert_at_end(10);
    ob.insert_at_end(20);
    ob.insert_at_end(30);
    ob.display(); // Show the list
    cout<<endl;

    ob.delete_at_beginning();
    ob.display(); // Show the list
    cout<<endl;

    ob.insert_at_beginning(5);
    ob.insert_at_beginning(3);
    ob.display(); // Show the list
    cout<<endl;

    ob.delete_at_end();
    ob.display();
    cout<<endl;

    ob.insert_at_beginning(1);
    ob.insert_at_end(40);
    ob.display();
    return 0;
}
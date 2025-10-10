#include<iostream>
using namespace std;                                             // head   <-    tail     
                                                //nullptr<-|prev|data|next|->|prev|data|next|->nullptr   
class Node{
    public:
    Node *prev;
    int data;                                    //DLL take more space as it has two pointer
    Node *next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    };    
};

class DLL{
    public:
    Node *head;
    Node *tail;
    DLL(){
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_at_end(int data){
        Node *newNode = new Node(data);
        if(head == nullptr || tail == nullptr){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;   //link newNode after tail
        newNode->prev = tail;   //link tail before newNode
        tail = newNode;         //make newNode as tail
    }

    void insert_at_beginning(int data){
        Node *newNode = new Node(data);
        if(head == nullptr || tail == nullptr){
            head = newNode;
            tail = newNode;
            return;
        }
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return;
    }
    void delete_at_beginning(){
        if(head == nullptr){
            cout << "List is empty,nothing to delete" << endl;
            return;
        }
        cout << "deleted element is " << head->data << endl;

        Node *temp = head;
        if(head->next == nullptr){
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    void delete_at_end(){
        if(tail == nullptr){
            cout << "List is empty,nothing to delete" << endl;
            return;
        }
        cout << "deleted element is " << tail->data << endl;

        Node *temp = tail;
        if(tail->prev == nullptr){
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
    }
    void display(){
        Node *temp = head;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};
int main(){
    DLL ob;
    ob.insert_at_end(10);
    ob.insert_at_end(20);
    ob.insert_at_end(30);
    ob.insert_at_beginning(5);
    ob.insert_at_beginning(3);
    ob.display(); // Show the list
    return 0;
}
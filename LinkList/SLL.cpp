// Write a program in single linked list without using STL Insert element in the reverse order count the number of nodes in the linked list and display the elements of the linked list

#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class sll{
    public:
    Node *head;
    sll(){
        this->head=nullptr;
}

 void insert_in_reverse(int data){
        Node *newNode = new Node(data);                             
        newNode->next = head;                                      
        head = newNode;
    }

    void display(){
        Node *temp = head;
        while(temp!=nullptr){
            cout<<temp->data<< " ";
            temp=temp->next; 

        }
        cout<<"null"<<endl;

    }

  void count_nodes(){
        int count = 0;
        Node *temp = head;
        while(temp!=nullptr){
            count++;
            temp=temp->next; 

        }
        cout<<"Number of nodes in the linked list: "<<count<<endl;

    }
};
int main()
 {
    sll ob;
    ob.insert_in_reverse(10);
    ob.insert_in_reverse(20);               
    ob.insert_in_reverse(30);
    ob.insert_in_reverse(40);
    ob.display();

    ob.count_nodes();
    return 0;

 }
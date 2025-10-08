#include<iostream>
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
    //Insert at end

    void insert_at_end(int data){
        Node *newNode = new Node(data);
        if (head == nullptr){
            head=newNode;
            return;
        }

        Node *temp = head;                                     //use head to store the Node Values AND temp used to shift to the next node
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next = newNode;

    }
    void display(){
        Node *temp = head;
        while(temp!=nullptr){
            cout<<temp->data<< " ";
            temp=temp->next; 

        }
        cout<<"null"<<endl;

    }

    void insert_at_beginning(int data){
        Node *newNode = new Node(data);                             // (newNode) |8|n|->nullptr
        newNode->next = head;                                       // nullptr = head
        head = newNode;                                             // head = |8|n| (newNode)

    }

    void insert_at_position(int data,int pos){
        if(pos<=0){
            cout<<"Invalid position"<<endl;
            return;
        }
        //Insert at beginning
        if(pos==1){
            insert_at_beginning(data);
            return;
    }
        Node *newNode = new Node(data);
        Node *temp = head;
        for(int i=1;temp != nullptr && i<pos-1;i++){
            temp=temp->next;
        }
        if(temp==nullptr){
            cout<<"Position is greater than the length of the list"<<endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void delete_at_position(int pos){
        if(pos<=0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(head == nullptr){
            cout<<"List is empty ,nothing to delete"<<endl;
            return;        
            }
        //Delete at beginning
        if(pos==1){
            delete_at_beginning();
            return;
    }
        Node *temp = head;
        Node *prev = nullptr;
        for(int i=1;temp != nullptr && i<pos;i++){
            prev = temp;
            temp=temp->next;
        }
        if(temp==nullptr){
            cout<<"Position is greater than the length of the list"<<endl;
            return;
        }
        prev->next = temp->next;
        cout<<"deleted element is "<<temp->data<<endl;
        delete temp;
        return;

    }




    void delete_at_beginning(){
        if(head == nullptr){
            cout<<"List is empty ,nothing to delete"<<endl;
            return;        
            }
        Node *temp = head;
        head = head->next;
        cout<<"deleted element is "<<temp->data<<endl;
        delete temp;        
    }

    void delete_at_end(){
            if(head == nullptr){
            cout<<"List is empty ,nothing to delete"<<endl;
            return;        
            }

            //If only one node

            if (head->next == nullptr){
                cout<<"deleted node with value"<<head->data<<endl;
                delete head;
                head = nullptr;
                return;
            }
        
        // If more than one node
        Node *temp = head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }

        cout<<"deleted node with value "<<temp->next->data<<endl;
        delete temp->next;
        temp -> next = nullptr;

    }
    void reverse(){
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while(current!=nullptr){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        cout<<"List reversed successfully"<<endl;
    }
    
};

int main(){

    sll ob;
    ob.insert_at_end(6);
    ob.insert_at_end(7);
    ob.insert_at_end(9);
    ob.insert_at_beginning(5);
    ob.insert_at_beginning(4);
    ob.insert_at_beginning(3);
    ob.display();
    cout<<endl;
    ob.insert_at_position(35,2);
    ob.display();
    cout<<endl;

    ob.delete_at_position(2);
    ob.display(); 
    cout<<endl; 

    ob.reverse();
    ob.display();
    cout<<endl;

    ob.delete_at_beginning();
    ob.display();
    cout<<endl;

    ob.delete_at_end();
    ob.display();
    return 0;
}
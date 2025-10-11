#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;

    }
};

//Insert the BST
Node *insert(Node *root,int val){
    if(root == nullptr){
        return new Node(val);                             

    }
    if(root->data < val ){
        root->right = insert(root->right,val);
    }
    else{
        root->left = insert(root->left,val);
    }
    return root;
}
//search in BST
bool search(Node *root,int key){
    if(root == NULL) return false;
    if(root->data == key) return true;
    if(root->data < key)return search(root->right,key);
    return search(root->left,key);
}

//inorder traversal

void inorder(Node * root){
    if (root==nullptr) return;
    inorder (root->left);
    cout<<root->data<< " ";
    inorder (root->right);
}

//preorder traversal


void preorder(Node * root){
    if (root==nullptr) return;
    cout<<root->data<< " ";
    preorder (root->left);
    preorder (root->right);
}

//postorder traversal

void postorder(Node * root){
    if (root==nullptr) return;
    postorder (root->left);
    postorder (root->right);
    cout<<root->data<< " ";
}

Node* findMin(Node* root)
{
    while(root && root->left != nullptr)
        root = root->left;
    return root;
}

// Delete a node from BST

Node* deleteNode(Node* root,int key){
    if (!root) return nullptr;                          //root == nullptr

    if (key<root->data){
        root->left = deleteNode(root->left,key);
    }
    else if (key>root->data){
        root->right = deleteNode(root->right,key);
    } 
    else {
        //Node found
        //case 1: left Node

        if(!root->left && !root->right){                  //root->right == nullptr && root->left == nullptr
            delete root;
            return nullptr;
        }

        // case2 : Node with one child

        else if (!root->left){
            Node* temp = root->right;
            delete root;
            return temp;
        } 
        else if (!root->right){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //case 3: Node with two children



        Node* temp = findMin (root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);

    }

    return root;

    }


int main(){
    Node *root = nullptr;

    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    cout<<"Inorder:";
    inorder(root);
    cout<<endl;

    cout<<"Delete leaf node 20\n";
    root = deleteNode(root,20);
    inorder(root);
    cout<<endl;

    cout<<"Delete node with one child 30\n";
    root = deleteNode(root,30);
    inorder(root);
    cout<<endl;

    cout<<"delete node with two childern 50\n";
    root = deleteNode(root,50);
    inorder(root);
    cout<<endl;

    return 0;
}
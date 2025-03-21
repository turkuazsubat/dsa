#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};



void insertnode(Node*& root, int value)
{
    if(root!=nullptr){
        if(root->data>value) 
        {
            insertnode(root->left,value);
        }
        else if(root->data<value)
        {
            insertnode(root->right,value);
        }
    }
    else
    {
        root = new Node(value);
    }
    
}

void insert(Node*& root, int value)
{
    Node* tmp = new Node(value);
    if(root == nullptr) root = tmp;
    else insertnode(root,value); 
}

void inOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left); // Sol alt ağacı gez
    std::cout << root->data << " "; // Kökü yazdır
    inOrder(root->right); // Sağ alt ağacı gez
}




int main() {
    
    std::cout << "Welcome to the DSA WorkShop" << std::endl;
    int value;

    Node* root = nullptr;


    while (true) {
        
        std::cout << "0. For Exit" << std::endl;
        std::cout << "1. For Insert a Data" << std::endl;
        std::cout << "2. For Show List" << std::endl;
        std::cout << "3. For Search to the List" << std::endl;
        std::cout << "4. For Removing to the List" << std::endl;

        int choice;
        std::cin >> choice;

        
        if (choice == 0) {
            break;
        }
        if(choice == 1)
        {
            std::cout<<"Enter value: ";
            std::cin>>value;
            std::cout<<std::endl;

            insert(root,value);
        }
        if (choice == 2) {
            inOrder(root);
        }

        

    
    }
    return 0;
}
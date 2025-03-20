#include <iostream>
struct Node
{
    int data;
    Node* next;
    Node* back;

    Node(int val)
    {
        data = val;
        next = nullptr;
        back=nullptr;
    }

};

void show(Node* head,Node* tail)
{
    Node* temp = head;

    while(temp!=nullptr)
    {   
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<std::endl;
}

void insert(Node*& head, Node*& tail, int value)
{
    Node* n = new Node(value);
    if(head == nullptr)
    {
        head = n;
        tail = n;
    }
    else
    {
        n->back=tail;
        tail->next = n;
        tail = n;
    }
}

int main() 
{
    
    std::cout << "Welcome to the DSA WorkShop" << std::endl;
    
    Node* head = nullptr;
    Node* tail = nullptr;
    int value;
    



    while (true) {
        
        std::cout << "0. For Exit" << std::endl;
        std::cout << "1. For Insert a Data" << std::endl;
        std::cout << "2. For Show List" << std::endl;
        std::cout << "3. For Search to the List" << std::endl;
        std::cout << "4. For Removing to the List" << std::endl;

        int choice;
        std::cin >> choice;

        
        if (choice == 0) 
        {
            break;
        }

        if(choice == 1)
        {
            std::cout<<"Enter value: ";
            std::cin>>value;
            std::cout<<std::endl;

            insert(head,tail,value);
        }
        if(choice == 2)
        {
            show(head,tail);        
        }
    }

    return 0;
}

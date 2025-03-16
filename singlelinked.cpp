
#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }

};

void printds(Node* head)
{
    Node* temp = head;

    while (temp!= nullptr)
    {
        std::cout<< temp->data << " ";
        temp = temp->next;
    }
    std::cout<<std::endl;
    
}

void insertion(Node*& head,Node*& tail,int value)
{

    Node* newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }

}

int main()
{

    int choice,value;
    

    Node* head = nullptr;
    Node* tail = nullptr;

    std::cout<<"Welcome to the DSA WorkShop"<<std::endl;

    while(true)
    {
        std::cout<<"0. For Exit"<<std::endl;
        std::cout<<"1. For Insert a Data"<<std::endl;
        std::cout<<"2. For Show List"<<std::endl;
        
        std::cin>>choice;

        if(choice==0)
        {
            break;
        }
        if(choice == 1)
        {
            std::cout<<"Enter value: ";
            std::cin>>value;
            std::cout<<std::endl;

            insertion(head,tail,value);
        }
        if(choice == 2)
        {
            printds(head);
        }
        

    }


    return 0;
}

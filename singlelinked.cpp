
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

bool searching(Node* head,int value)
{
    Node* temp = head;

    while (temp != nullptr && temp->data != value )
    {
        temp = temp->next;
    }  

    if (temp == nullptr) return false;

    return true;

}

bool removing(Node* head,Node* tail, int value)
{
    /*
    There are several possibilities
    1- List is empty
    2- The Only one node
    3- Removing the head Node
    4- Removing the tail Node
    5- Between head and tail
    6- Doesn't exist
    */
    
    //Case 1
    if(head == nullptr) return false;

    
    if(head->data == value)
    {
        if(head == tail)
        {
            //Case 2
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            //Case 3
            head = head->next;
        }
        return true;
    }
    Node* temp = head;
/*
    while(temp->next != nullptr && temp->next != tail)
    {
        temp = temp->next;
    }
*/

// There are some gpt code 
while (temp->next != nullptr) {
    if (temp->next->data == value) {
        // Found the node to remove
        if (temp->next == tail) {
            // Case 4: Removing the tail node
            tail = temp; // Update tail
        }
        temp->next = temp->next->next; // Remove node
        return true;
    }
    temp = temp->next;
}
    

    

    //Case 6
    return false;

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
        std::cout<<"3. For Search to the List"<<std::endl;
        std::cout<<"4. For Removing to the List"<<std::endl;
        
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
        if(choice == 3)
        {
            bool resu;
            std::cout<<"Enter searching value: ";
            std::cin>>value;
            std::cout<<std::endl;

            resu = searching(head,value);
            
            if(resu) std::cout<<"There Are"<<std::endl;
            else std::cout<<"Doesn't Exist"<<std::endl;
        }
        // removing
        if(choice == 4)
        {
            bool resu;
            std::cout<<"Enter Deleting value: ";
            std::cin>>value;
            std::cout<<std::endl;

            resu = removing(head,tail,value);
            
            if(resu) std::cout<<"Value is deleted"<<std::endl;
            else std::cout<<"Doesn't Exist"<<std::endl;
        }
        

    }


    return 0;
}

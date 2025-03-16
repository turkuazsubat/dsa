
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
    
    
}

int main()
{
    std::cout << "Hello World" << std::endl;
    

    Node* head = new Node(1);

    head->next = new Node(2);
    head->next->next = new Node(3);

    std::cout << "LinkedList: ";
    printds(head);
    


    return 0;
}

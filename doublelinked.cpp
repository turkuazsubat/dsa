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

int main() {
    
    std::cout << "Welcome to the DSA WorkShop" << std::endl;
    
    Node* head = nullptr;
    Node* tail = nullptr;
    head = tail;
    


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

        

    return 0;
}

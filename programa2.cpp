#include <iostream>
#include <vector>

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

void SwapAdjacentPairs(Node*& head)
{
    Node* first = head;

    while (first != nullptr && first->next != nullptr)
    {
        Node* second = first->next;
        Node* before = first->prev;
        Node* after = second->next;

        second->prev = before;
        if (before != nullptr)
        {
            before->next = second;
        }
        else
        {
            head = second;
        }

        second->next = first;
        first->prev = second;

        first->next = after;
        if (after != nullptr)
        {
            after->prev = first;
        }

        first = after;
    }
}

Node* buildList(const std::vector<int>& values)
{
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int value : values)
    {
        Node* node = new Node{value, nullptr, tail};
        if (tail == nullptr)
        {
            head = node;
        }
        else
        {
            tail->next = node;
        }
        tail = node;
    }
    return head;
}

void printList(Node* head)
{
    if (head == nullptr)
    {
        std::cout << "Vacia" << std::endl;
        return;
    }
    Node* current = head;
    while (current != nullptr)
    {
        std::cout << current->data;
        if (current->next != nullptr)
        {
            std::cout << " <-> ";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

void freeList(Node* head)
{
    while (head != nullptr)
    {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

int main()
{
    std::vector<std::vector<int>> tests = {
        {10, 20, 30, 40}, {5, 8, 12, 15, 20}, {7}, {}};

    for (const auto& values : tests)
    {
        Node* head = buildList(values);
        std::cout << "Antes:   ";
        printList(head);

        SwapAdjacentPairs(head);

        std::cout << "Despues: ";
        printList(head);
        std::cout << std::endl;

        freeList(head);
    }






    
    return 0;
}
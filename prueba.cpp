#include <iostream>
#include <vector>

struct Node {
  int data;
  Node* next;
  Node* prev;
};

void ReverseList(Node*& head) {
  Node* current = head;
  Node* new_head = nullptr;

  while (current != nullptr) {
    Node* temp = current->next;
    current->next = current->prev;
    current->prev = temp;
    new_head = current;
    current = current->prev;
  }

  head = new_head;
}

Node* BuildList(const std::vector<int>& values) {
  Node* head = nullptr;
  Node* tail = nullptr;
  for (int value : values) {
    Node* node = new Node{value, nullptr, tail};
    if (tail == nullptr) {
      head = node;
    } else {
      tail->next = node;
    }
    tail = node;
  }
  return head;
}

void PrintList(Node* head) {
  if (head == nullptr) {
    std::cout << "Vacia" << std::endl;
    return;
  }
  Node* current = head;
  while (current != nullptr) {
    std::cout << current->data;
    if (current->next != nullptr) {
      std::cout << " <-> ";
    }
    current = current->next;
  }
  std::cout << std::endl;
}

void FreeList(Node* head) {
  while (head != nullptr) {
    Node* next = head->next;
    delete head;
    head = next;
  }
}

int main() {
  std::vector<std::vector<int>> tests = {{10, 20, 30, 40}, {7}, {}};

  for (const auto& values : tests) {
    Node* head = BuildList(values);
    std::cout << "Antes:   ";
    PrintList(head);

    ReverseList(head);

    std::cout << "Despues: ";
    PrintList(head);
    std::cout << std::endl;

    FreeList(head);
  }





  
  return 0;
}
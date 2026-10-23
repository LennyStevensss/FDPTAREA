#include <iostream>
#include <stack>
#include <vector>

void RemoveConsecutiveDuplicates(std::stack<int>& values)
{
    std::stack<int> aux;

    while (!values.empty())
    {
        int value = values.top();
        values.pop();
        if (aux.empty() || aux.top() != value)
        {
            aux.push(value);
        }
    }

    while (!aux.empty())
    {
        values.push(aux.top());
        aux.pop();
    }
}

std::stack<int> buildStack(const std::vector<int>& values)
{
    std::stack<int> s;
    for (int value : values)
    {
        s.push(value);
    }
    return s;
}

void printStack(std::stack<int> s)
{
    if (s.empty())
    {
        std::cout << "Vacia" << std::endl;
        return;
    }
    std::cout << "Tope -> ";
    while (!s.empty())
    {
        std::cout << s.top();
        s.pop();
        if (!s.empty())
        {
            std::cout << ", ";
        }
    }
    std::cout << " <- Fondo" << std::endl;
}

int main()
{
    std::vector<std::vector<int>> tests = {
        {1, 2, 2, 2, 3, 3}, {5, 5, 5, 5}, {4, 7, 4, 7}, {9}, {}};

    for (const auto& testValues : tests)
    {
        std::stack<int> s = buildStack(testValues);
        std::cout << "Antes:   ";
        printStack(s);

        RemoveConsecutiveDuplicates(s);

        std::cout << "Despues: ";
        printStack(s);
        std::cout << std::endl;
    }

    return 0;
}
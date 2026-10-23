#include <iostream>
#include <vector>

bool vaDespues(int a, int b)
{
    bool aEsImpar = (a % 2 != 0);
    bool bEsImpar = (b % 2 != 0);

    if (aEsImpar == bEsImpar)
    {
        return a > b;
    }
    return aEsImpar;
}

void InsertionSort(int numeros[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int clave = numeros[i];
        int j = i - 1;
        while (j >= 0 && vaDespues(numeros[j], clave))
        {
            numeros[j + 1] = numeros[j];
            j--;
        }
        numeros[j + 1] = clave;
    }
}

void imprimirArreglo(const int numeros[], int n)
{
    if (n == 0)
    {
        std::cout << "Vacio" << std::endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << numeros[i];
        if (i < n - 1)
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<std::vector<int>> pruebas = {
        {8, 5, 2, 7, 4, 1, 6}, {1, 3, 5}, {6, 4, 2}, {5, 2, 5, 2}, {7}, {}};

    for (auto& valores : pruebas)
    {
        int n = static_cast<int>(valores.size());

        std::cout << "Entrada: ";
        imprimirArreglo(valores.data(), n);

        InsertionSort(valores.data(), n);

        std::cout << "Salida:  ";
        imprimirArreglo(valores.data(), n);
        std::cout << std::endl;
    }

    return 0;
}
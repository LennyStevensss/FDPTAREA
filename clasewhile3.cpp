#include <iostream>

using namespace std;

int main() {
    int n;
    int contador = 1;
    int suma = 0;

    cout << "-------------------"<<endl;
    cout << "|Ingresa un numero|"<<endl;
    cout << "-------------------"<<endl;

    cin >> n;

    while (contador <= n) {
        if (contador % 2 == 0) {
            suma = suma + contador;
        }

        contador++;
    }

    cout << "--------------------------------------------------------------------"<<endl;
    cout << "La suma de los numeros pares desde 1 hasta " << n << " es: " << suma << endl;
    cout << "--------------------------------------------------------------------"<<endl;


    return 0;
}
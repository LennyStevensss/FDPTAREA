#include <iostream>

using namespace std;

int main() {
    int N;
    int contador = 1;
    int a = 0;
    int b = 1;
    int siguiente;

    cout << "-------------------" << endl;
    cout << "Ingrese un numero: " << endl;
    cout << "-------------------" << endl;

    cin >> N;

    while (contador <= N) {
        cout << a << " ";

        siguiente = a + b;
        a = b;
        b = siguiente;

        contador++;
    }

    cout << endl;

    return 0;
}
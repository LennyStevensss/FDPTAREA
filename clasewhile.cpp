#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "---------------------"<<endl;
    cout << "|Ingrese un numero  |"<<endl;
    cout << "---------------------"<<endl;

    cin >> numero;

    while (numero >= 0) {
        cout << numero << endl;
        numero--;
    }

    return 0;
}
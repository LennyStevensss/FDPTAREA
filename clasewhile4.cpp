#include <iostream>

using namespace std;

int main() {
    int opcion;

    while (opcion != 4) {
        cout << "-----------------------------" << endl;
        cout << "|       MENU                |" << endl;
        cout << "|---------------------------|" << endl;
        cout << "|1. opcion 1                |"<< endl;
        cout << "|2. opcion 2                |" << endl;
        cout << "|3. opcion 3                |" << endl;  
        cout << "|4. Salir                   |" << endl;
        cout << "|proximamente               |" << endl;
        cout << "|---------------------------|" << endl;

        cin >> opcion;

        if (opcion == 1) {
            cout << "hola como ¿todo bien?" << endl;
        } 
        else if (opcion == 2) {
            cout << "¿hay algun problema?" << endl;
        } 
        else if (opcion == 3) {
            cout << "estamos trabajando en ello" << endl;
        } 
        else if (opcion == 4) {
            cout << "Saliste del programa" << endl;
        } 
        else {
            cout << "aun no esta disponible" << endl;
        }

        cout << endl;
    }

    return 0;
}
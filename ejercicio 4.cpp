#include <iostream>
using namespace std;

int main()
{
    int transporte;
   int billetera=100;

    cout<<"......................................................................."<<endl;
    cout << "|                                                                   |"<<endl;
    cout << "|Elige en que tipo de transporte quieres usar                       |" << endl;
    cout << "|1. Bus                                                             |" << endl;
    cout << "|2. Metro                                                           |" << endl;
    cout << "|3. Taxi                                                            |" << endl;
    cout << "|                                                                   |"<<endl;
    cout<<"......................................................................."<<endl;
    cin >> transporte;

    switch (transporte)
    {
    case 1:
        cout << "----------------------------------------" << endl;
        cout << "|Tu costo de pasaje de bus es de $0.35. |" <<billetera-0.35<< endl;
        cout << "----------------------------------------" << endl;
        break;

    case 2:
        cout << "------------------------------------------" << endl;
        cout << "|Tu costo de pasaje de metro es de $10.00|" << endl;
        cout << "------------------------------------------" << endl;
        break;
    case 3:
        cout << "-------------------------------- " << endl;
        cout << "|Tu tarifa de taxi es de $3.00.|" << endl;
        cout << "--------------------------------" << endl;
        break;

    default:
        cout << "Error! datos no encontrados" << endl;
    }

    return 0;
}
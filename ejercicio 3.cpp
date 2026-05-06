#include <iostream>

using namespace std;

int main()
{
    int cm,metros,kilometros,opcion,opcion1;

    float suma1 = 0;

    cout <<"--------------------------------------------------------"<< endl;
    cout << "|ingrese el numero de opcion que quiera realizar         |" << endl;
    cout << "|1 = cm a pulgadas/in                                    |" << endl;
    cout << "|2 = metros a pies/ft                                    |" << endl;
    cout << "|3 = km a millas/mi                                      |" << endl;
    cout <<"--------------------------------------------------------"<< endl;
    cin >> opcion;

    switch (opcion)

    case 1:

    {

        cout << "ingrese el numero de cm a convertir" << endl;
        cin >> cm;
        suma1 = cm * 0.393701 ;
        cout << suma1 << "pulgadas/in" << endl;
        break;
        
        case 2:

        cout<<"ingrese el numero metros a convertir"<<endl;
        cin >> metros;
        suma1= metros*3.28084;
        cout << suma1 << "pies/ft"<<endl;
        
        break;
        
        case 3:

        cout<<"ingrese el numero de kilometros a convertir";
        cin>> kilometros;
        suma1=kilometros*1.60934;
        cout <<suma1<<"millas/mi";

        break;
        
        default:
        cout<<"datos incorrectos"<<endl;

    }
    
    return 0;

}

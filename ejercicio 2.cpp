#include <iostream>
using namespace std;

int main()
{
    int mes;
    
    cout<<"=======!Conoce cual es tu signo zodiacal!======="<<endl; 
    cout <<"-----------------------------------------------"<<endl;
    cout << "|Ingresa tu mes de nacimiento                 |" << endl;       
    cout << "|1. Enero a Febrero                           |" << endl;           
    cout << "|2. Marzo a Abril                             |"<< endl;
    cout << "|3. Mayo a Junio                              |" << endl;
    cout << "|4. Julio a Agosto                            |" << endl;
    cout << "|5. Septiembre a Octubre                      |" << endl;
    cout << "|6. Noviembre a Diciembre                     |" << endl;
    cout <<"-----------------------------------------------"<<endl;
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "Tu signo es Acuario. " << endl;
        break;
    case 2:
        cout << "Tu signo es Aries. " << endl;
        break;
    case 3:
        cout << "tu signo es Geminis. " << endl;
        break;
    case 4:
        cout << "Tu sigo es Cancer. " << endl;
        break;
    case 5:
        cout << "Tu signo es Libra. " << endl;
        break;
    case 6:
        cout << "tu signo es Sagitario. " << endl;
        break;

    default:
        cout << "error! datos invalidos, intenta de nuevo. " << endl;
    }

    return 0;
}
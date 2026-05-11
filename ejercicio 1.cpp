#include<iostream>
using namespace std;
int main()
{
int dia;

cout<<"......................................................................."<<endl;
cout<<"|--bienvenido dime el horario del dia de la semana que quieras saber--|"<<endl;
cout<<"|1-lunes                                                              |"<<endl;
cout<<"|2-martes                                                             |"<<endl;
cout<<"|3-jueves                                                             |"<<endl;
cout<<"|4-jueves                                                             |"<<endl;
cout<<"|5-viernes                                                            |"<<endl;
cout<<"|6-sabado                                                             |"<<endl;
cout<<"|7-domingo                                                            |"<<endl;
cout<<"......................................................................."<<endl;
cin>>dia;


switch(dia)
{
     case 1:
     cout << "-----------------------------------------------------------------------" << endl;
     cout<< 1 <<"|el horario del dia lunes es fisica: 10:00am y programacion: 1:00pm|" << endl;
     cout << "-----------------------------------------------------------------------" << endl;
     
     break;

    case 2:

    cout << "-----------------------------------------------------------------------------------" << endl;
    cout<< 2 <<"|el horario del dia martes es matematica discreta: 10:00am y precalculo: 1:00pm|"<< endl;
    cout << "-----------------------------------------------------------------------------------" << endl;
    
    break;

    case 3:

     cout << "---------------------------------------------------------------------------" << endl;
    cout << 3 <<"|el horario del dia miercoles es fisica: 10:00am y programacion: 1:00pm|" << endl;
     cout << "---------------------------------------------------------------------------" << endl;

    break;

    case 4:
     cout << "-----------------------------------------------------------------------------------" << endl;
    cout << 4 <<"|el horario del dia jueves es matematica discreta: 10:00am y precalculo: 1:00pm|" << endl;
     cout << "-----------------------------------------------------------------------------------" << endl;

    break;

    case 5:
     cout << "----------------------------------------------------" << endl;
    cout<< 5 <<"|el horario del dia viernes es precalculo: 7.00am|" << endl;
     cout << "----------------------------------------------------" << endl;

    default:

     cout << "-----------------------" << endl;
    cout<<"|este dia no tienes clase|" << endl;
     cout << "-----------------------" << endl;

     break;



     }

    
    
    return 0;

}
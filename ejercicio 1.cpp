#include<iostream>
using namespace std;
int main()
{
int dia;
cout<<"1-lunes"<<endl;
cout<<"2-martes"<<endl;
cout<<"3-jueves"<<endl;
cout<<"4-jueves"<<endl;
cout<<"5-viernes"<<endl;


cout<<"...................................................................";
cout<<"bienvenido dime el horario del dia de la semana que quieras saber";
cout<<"|1-lunes                                                          |"<<endl;
cout<<"|2-martes                                                         |"<<endl;
cout<<"|3-jueves                                                         |"<<endl;
cout<<"|4-jueves                                                         |"<<endl;
cout<<"|5-viernes                                                        |"<<endl;
cout<<"...................................................................";
cin>>dia;

switch(dia)
{
     case 1:
     cout<< 1 <<"el horario del dia lunes es fisica: 10:00am y programacion: 1:00pm";
     break;
    case 2:
    cout<< 2 <<"el horario del dia martes es matematica discreta: 10:00am y precalculo: 1:00pm";
    break;
    case 3:
    cout << 3 <<"el horario del dia miercoles es fisica: 10:00am y programacion: 1:00pm";
    break;
    case 4:
    cout << 4 <<" el horario del dia jueves es matematica discreta: 10:00am y precalculo: 1:00pm";
    break;
    case 5:
    cout<< 5 <<"el horario del dia viernes es precalculo: 7.00am";

    default:
    cout<<"este no tienes clase";


     }

    
    
    return 0;

}
#include "Clsinformes.h"

//Librerias
#include<conio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include <string.h>

using namespace std;

Clsinformes::Clsinformes()
{
    //ctor
}

Clsinformes::mmenuInforme()
{
    int imenu=0;
    //Menu catalogo
    do
    {
        system("cls");
        cout<<"-----------------------------------------"<<endl;
        cout<<"---Nombre: Josue Ernesto Rivas De Leon---"<<endl;
        cout<<"---------Carne No: 9491 21 3133----------"<<endl;
        cout<<"|------BIENVENIDO AL MENU INFORMES-------|"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"1. Informe de alumnos"<<endl;
        cout<<"2. Infome de Maestros"<<endl;
        cout<<"0. Regresar"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"OPCIONES A ESCOGER :             [1/2/0]"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"INGRESA TU OPCION : ";
        cin>>imenu;
        switch (imenu)
        {
        case 1:
            {
                cout<<"Usted esta en el apartado Alumnos";
                getch();
            }
            break;
        case 2:
            {
                cout<<"Usted esta en el apartado Maestros";
                getch();
            }
            break;
        case 0:
            break;
        default:
            cout<<"Valor ingresado no vádido, intente de nuevo";
            getch();
            break;
        }
    }while(imenu!=0);
}

Clsinformes::~Clsinformes()
{
    //dtor
}

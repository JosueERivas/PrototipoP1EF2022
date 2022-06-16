#include "Clsproceso.h"

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

Clsproceso::Clsproceso()
{
    //ctor
}

Clsproceso::mmenuProceso()
{
    int imenu=0;
    //Menu catalogo
    do
    {
        system("cls");
        cout<<"-----------------------------------------"<<endl;
        cout<<"---Nombre: Josue Ernesto Rivas De Leon---"<<endl;
        cout<<"---------Carne No: 9491 21 3133----------"<<endl;
        cout<<"|------BIENVENIDO AL MENU PROCESOS-------|"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"1. Asignacion de cursos Alumnos"<<endl;
        cout<<"2. Asignacion de cursos Maestros"<<endl;
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
                cout<<"Usted esta en el apartado asignacion de cursos Alumnos"<<endl;
                cout<<"Se ha asignado los cursos a los alumnos de manera automatica.";
                getch();
            }
            break;
        case 2:
            {
                cout<<"Usted esta en el apartado asignacion de cursos Maestros";
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

Clsproceso::~Clsproceso()
{
    //dtor
}

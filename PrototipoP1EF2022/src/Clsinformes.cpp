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
        cout<<"---------Carné No: 9491 21 3133----------"<<endl;
        cout<<"|------BIENVENIDO AL MENU INFORMES-------|"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"1. Informe de alumnos"<<endl;
        cout<<"2. Infome de Maestros"<<endl;
        cout<<"3. Informe de Pagos Maestros"<<endl;
        cout<<"4. Infomes Solvencia Alumnos"<<endl;
        cout<<"5. Informes Notas de Alumnos"<<endl;
        cout<<"6. Informes Actas de Alumnos"<<endl;
        cout<<"0. Regresar"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"OPCIONES A ESCOGER : [1/2/3/4/5/6/0]"<<endl;
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
        case 3:
            {
                cout<<"Usted esta en el apartado Secciones";
                getch();
            }
            break;
        case 4:
            {
                cout<<"Usted esta en el apartado Facultades";
                getch();
            }
            break;
        case 5:
            {
                cout<<"Usted esta en el apartado Carreras";
                getch();
            }
            break;
        case 6:
            {
                cout<<"Usted esta en el apartado Cursos";
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

#include "Clscatalogo.h"

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

Clscatalogo::Clscatalogo()
{
    //ctor
}

Clscatalogo::mmenuCatalogo()
{
    int imenu=0;
    //Menu catalogo
    do
    {
        system("cls");
        cout<<"-----------------------------------------"<<endl;
        cout<<"---Nombre: Josue Ernesto Rivas De Leon---"<<endl;
        cout<<"---------Carn� No: 9491 21 3133----------"<<endl;
        cout<<"|------BIENVENIDO AL MENU CATALOGO------|"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"1. Alumnos"<<endl;
        cout<<"2. Maestros"<<endl;
        cout<<"3. Secciones"<<endl;
        cout<<"4. Facultades"<<endl;
        cout<<"5. Carreras"<<endl;
        cout<<"6. Cursos"<<endl;
        cout<<"7. Sedes"<<endl;
        cout<<"8. Aulas"<<endl;
        cout<<"0. Regresar"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"OPCIONES A ESCOGER : [1/2/3/4/5/6/7/8/0]"<<endl;
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
        case 7:
            {
                cout<<"Usted esta en el apartado Sedes";
                getch();
            }
            break;
        case 8:
            {
                cout<<"Usted esta en el apartado Aulas";
                getch();
            }
            break;
        case 0:
            break;
        default:
            cout<<"Valor ingresado no v�dido, intente de nuevo";
            getch();
            break;
        }
    }while(imenu!=0);
}

Clscatalogo::~Clscatalogo()
{
    //dtor
}

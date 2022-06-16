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

//Clases
#include<Clsalumno.h>

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
        cout<<"---------Carné No: 9491 21 3133----------"<<endl;
        cout<<"|------BIENVENIDO AL MENU CATALOGO------|"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"1. Alumnos"<<endl;
        cout<<"2. Maestros"<<endl;
        cout<<"3. Secciones"<<endl;
        cout<<"4. Facultades"<<endl;
        cout<<"5. Carreras"<<endl;
        cout<<"6. Cursos"<<endl;
        cout<<"7. Sedes"<<endl;
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
                string sclase="ALUMNOS";
                Clsalumno menuAlumno;
                int imenu=0;
                //Menu catalogo
                do
                {
                    system("cls");
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"---Nombre: Josue Ernesto Rivas De Leon---"<<endl;
                    cout<<"---------Carné No: 9491 21 3133----------"<<endl;
                    cout<<"BIENVENIDO A GESTION DE"<<sclase<<endl;
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"1. Agregar "<<sclase<<endl;
                    cout<<"2. Eliminar "<<sclase<<endl;
                    cout<<"3. Modificar "<<sclase<<endl;
                    cout<<"4. Desplegar "<<sclase<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"OPCIONES A ESCOGER :         [1/2/3/4/0]"<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"INGRESA TU OPCION : ";
                    cin>>imenu;
                    switch (imenu)
                    {
                    case 1:
                        {
                            cout<<"USTED ESTA EN EL APARTADO AGREGAR "<<sclase<<endl;
                            fstream archivo("alumno.dat", ios::in | ios::out | ios::binary);
                            // salir del programa si fstream no puede abrir el archivo
                            if ( !archivo )
                                {
                                    cerr << "No se pudo abrir el archivo." << endl;
                                    menuAlumno.mcrearArchivo();
                                    cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo";
                                    exit ( 1 );
                                }
                            menuAlumno.magregar(archivo);
                            archivo.close();
                        }
                        break;
                    case 2:
                        {
                            cout<<"USTED ESTA EN EL APARTADO ELIMINAR "<<sclase<<endl;
                            getch();
                        }
                        break;
                    case 3:
                        {
                            cout<<"USTED ESTA EN EL APARTADO MODIFICAR "<<sclase<<endl;
                            getch();
                        }
                        break;
                    case 4:
                        {
                            cout<<"USTED ESTA EN EL APARTADO DESPLEGAR "<<sclase<<endl;
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
                menuAlumno.~Clsalumno();
            }
            break;
        case 2:
            {
                string sclase="MAESTROS";
                int imenu=0;
                //Menu catalogo
                do
                {
                    system("cls");
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"---Nombre: Josue Ernesto Rivas De Leon---"<<endl;
                    cout<<"---------Carné No: 9491 21 3133----------"<<endl;
                    cout<<"BIENVENIDO A GESTION DE"<<sclase<<endl;
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"1. Agregar "<<sclase<<endl;
                    cout<<"2. Eliminar "<<sclase<<endl;
                    cout<<"3. Modificar "<<sclase<<endl;
                    cout<<"4. Desplegar "<<sclase<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"OPCIONES A ESCOGER :         [1/2/3/4/0]"<<endl;
                    cout<<"----------------------------------------"<<endl;
                    cout<<"INGRESA TU OPCION : ";
                    cin>>imenu;
                    switch (imenu)
                    {
                    case 1:
                        {
                            cout<<"USTED ESTA EN EL APARTADO AGREGAR "<<sclase<<endl;
                        }
                        break;
                    case 2:
                        {
                            cout<<"USTED ESTA EN EL APARTADO ELIMINAR "<<sclase<<endl;
                            getch();
                        }
                        break;
                    case 3:
                        {
                            cout<<"USTED ESTA EN EL APARTADO MODIFICAR "<<sclase<<endl;
                            getch();
                        }
                        break;
                    case 4:
                        {
                            cout<<"USTED ESTA EN EL APARTADO DESPLEGAR "<<sclase<<endl;
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
            cout<<"Valor ingresado no vádido, intente de nuevo";
            getch();
            break;
        }
    }while(imenu!=0);
}

Clscatalogo::~Clscatalogo()
{
    //dtor
}

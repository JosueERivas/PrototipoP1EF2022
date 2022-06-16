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
#include<Clsmaestro.h>
#include<Clscarrera.h>

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
        cout<<"3. Carreras"<<endl;
        cout<<"0. Regresar"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"OPCIONES A ESCOGER :           [1/2/3/0]"<<endl;
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
                    fstream archivo("alumno.dat", ios::in | ios::out | ios::binary);
                    // salir del programa si fstream no puede abrir el archivo
                    if ( !archivo )
                    {
                        cerr << "No se pudo abrir el archivo." << endl;
                        menuAlumno.mcrearArchivo();
                        cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo";
                        exit ( 1 );
                    }
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
                            menuAlumno.magregar(archivo);
                            getch();
                        }
                        break;
                    case 2:
                        {
                            cout<<"USTED ESTA EN EL APARTADO ELIMINAR "<<sclase<<endl;
                            menuAlumno.meliminar(archivo);
                            getch();
                        }
                        break;
                    case 3:
                        {
                            cout<<"USTED ESTA EN EL APARTADO MODIFICAR "<<sclase<<endl;
                            menuAlumno.mmodificar(archivo);
                            getch();
                        }
                        break;
                    case 4:
                        {
                            cout<<"USTED ESTA EN EL APARTADO DESPLEGAR "<<sclase<<endl;
                            menuAlumno.mdesplegar(archivo);
                            getch();
                        }
                        break;
                    case 0:
                        {
                            archivo.close();
                        }
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
                string sclase="MAESTRO";
                Clsmaestro menuMaestro;
                int imenu=0;
                //Menu catalogo
                do
                {
                    system("cls");
                    fstream archivo("maestro.dat", ios::in | ios::out | ios::binary);
                    // salir del programa si fstream no puede abrir el archivo
                    if ( !archivo )
                    {
                        cerr << "No se pudo abrir el archivo." << endl;
                        menuMaestro.mcrearArchivo();
                        cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo";
                        exit ( 1 );
                    }
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"---Nombre: Josue Ernesto Rivas De Leon---"<<endl;
                    cout<<"---------Carne No: 9491 21 3133----------"<<endl;
                    cout<<"BIENVENIDO A GESTION DE "<<sclase<<endl;
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
                            menuMaestro.magregar(archivo);
                            getch();
                        }
                        break;
                    case 2:
                        {
                            cout<<"USTED ESTA EN EL APARTADO ELIMINAR "<<sclase<<endl;
                            menuMaestro.meliminar(archivo);
                            getch();
                        }
                        break;
                    case 3:
                        {
                            cout<<"USTED ESTA EN EL APARTADO MODIFICAR "<<sclase<<endl;
                            menuMaestro.mmodificar(archivo);
                            getch();
                        }
                        break;
                    case 4:
                        {
                            cout<<"USTED ESTA EN EL APARTADO DESPLEGAR "<<sclase<<endl;
                            menuMaestro.mdesplegar(archivo);
                            getch();
                        }
                        break;
                    case 0:
                        {
                            archivo.close();
                        }
                        break;
                    default:
                        cout<<"Valor ingresado no vádido, intente de nuevo";
                        getch();
                        break;
                    }
                }while(imenu!=0);
                menuMaestro.~Clsmaestro();
            }
            break;
        case 3:
            {
                string sclase="CARRERA";
                Clscarrera menuCarrera;
                int imenu=0;
                //Menu catalogo
                do
                {
                    system("cls");
                    fstream archivo("carrera.dat", ios::in | ios::out | ios::binary);
                    // salir del programa si fstream no puede abrir el archivo
                    if ( !archivo )
                    {
                        cerr << "No se pudo abrir el archivo." << endl;
                        menuCarrera.mcrearArchivo();
                        cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo";
                        exit ( 1 );
                    }
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"---Nombre: Josue Ernesto Rivas De Leon---"<<endl;
                    cout<<"---------Carne No: 9491 21 3133----------"<<endl;
                    cout<<"BIENVENIDO A GESTION DE "<<sclase<<endl;
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
                            menuCarrera.magregar(archivo);
                            getch();
                        }
                        break;
                    case 2:
                        {
                            cout<<"USTED ESTA EN EL APARTADO ELIMINAR "<<sclase<<endl;
                            menuCarrera.meliminar(archivo);
                            getch();
                        }
                        break;
                    case 3:
                        {
                            cout<<"USTED ESTA EN EL APARTADO MODIFICAR "<<sclase<<endl;
                            menuCarrera.mmodificar(archivo);
                            getch();
                        }
                        break;
                    case 4:
                        {
                            cout<<"USTED ESTA EN EL APARTADO DESPLEGAR "<<sclase<<endl;
                            menuCarrera.mdesplegar(archivo);
                            getch();
                        }
                        break;
                    case 0:
                        {
                            archivo.close();
                        }
                        break;
                    default:
                        cout<<"Valor ingresado no vádido, intente de nuevo";
                        getch();
                        break;
                    }
                }while(imenu!=0);
                menuCarrera.~Clscarrera();
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

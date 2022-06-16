#include "ClsasignacionAlumno.h"

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

ClsasignacionAlumno::ClsasignacionAlumno(int clave, int claveAlumno, int clavecarrera, int semestre, string nombre, string apellido, string nombreCarrera, string cursos)
{
    //ctor
    mestablecerClave(clave);
    mestablecerClaveAlumno(claveAlumno);
    mestablecerClaveCarrera(clavecarrera);
    mestablecerSemestre(semestre);
    mestablecerNombre(nombre);
    mestablecerApellido(apellido);
    mestablecerNombreCarrera(nombreCarrera);
    mestablecerCursos(cursos);
}

int ClsasignacionAlumno::mobtenerClave() const
{
    return iclave;
}

void ClsasignacionAlumno::mestablecerClave (int entero)
{
    iclave = entero;
}

int ClsasignacionAlumno::mobtenerClaveAlumno() const
{
    return iclaveAlumno;
}

void ClsasignacionAlumno::mestablecerClaveAlumno(int entero)
{
    iclaveAlumno = entero;
}

int ClsasignacionAlumno::mobtenerClaveCarrera() const
{
    return iclaveCarrera;
}

void ClsasignacionAlumno::mestablecerSemestre(int entero)
{
    isemestre = entero;
}

int ClsasignacionAlumno::mobtenerSemestre() const
{
    return isemestre;
}

void ClsasignacionAlumno::mestablecerClaveCarrera (int entero)
{
    iclaveCarrera = entero;
}

string ClsasignacionAlumno::mobtenerNombre() const
{
    return snombre;
}

void ClsasignacionAlumno::mestablecerNombre( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 10 ? ilongitud : 9 );
   strncpy( snombre, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   snombre[ ilongitud ] = '\0';
}

string ClsasignacionAlumno::mobtenerApellido() const
{
    return sapellido;
}

void ClsasignacionAlumno::mestablecerApellido( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 10 ? ilongitud : 9 );
   strncpy( sapellido, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   sapellido[ ilongitud ] = '\0';
}

string ClsasignacionAlumno::mobtenerNombreCarrera() const
{
    return snombre;
}

void ClsasignacionAlumno::mestablecerNombreCarrera( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 10 ? ilongitud : 9 );
   strncpy( snombre, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   snombre[ ilongitud ] = '\0';
}

string ClsasignacionAlumno::mobtenerCursos() const
{
    return scursos;
}

void ClsasignacionAlumno::mestablecerCursos( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 100 ? ilongitud : 99 );
   strncpy( scursos, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   scursos[ ilongitud ] = '\0';
}

int ClsasignacionAlumno::mobtenerIndicador(const char * const iindicador)
{
    int clave;
   // obtener el valor de la clave
   do
    {
      cout << iindicador << " (1 - 100): ";
      cin >> clave;
    } while ( clave < 1 || clave > 100 );
   return clave;
}
/*
void ClsasignacionAlumno::magregar(fstream &archivo)
{
   ClsasignacionAlumno alumno;
   do{
       int clave = 1;
       // desplazar el apuntador de posición del archivo hasta el registro correcto en el archivo
       archivo.seekg(
          ( clave - 1 ) * sizeof( ClsasignacionAlumno ) );
       // leer el registro del archivo
       archivo.read( reinterpret_cast< char * >( &alumno ),
          sizeof( ClsasignacionAlumno ) );
       // crear el registro, si éste no existe ya
       if ( alumno.mobtenerClave() == 0 )
       {
            //Atributos a ingresar
            int clave=0;
            int claveAlumno=0;
            int claveCarrera=0;
            int semestre=0
            char nombre[10];
            char apellido[10];
            char nombreCarrera[10];
            char cursos[100];
            //Solicitud al usuario de llenar los atributos
            cout << "Escriba la clave de la carrera del alumno: " << endl;
            cin >> setw( 10 ) >> carrera;
            cout << "Escriba el primer nombre del alumno: " << endl;
            cin >> setw( 10 ) >> nombre;
            cout << "Escriba segundo y/o tercer nombre del alumno: " << endl;
            cin >> setw( 20 ) >> nombres;
            cout << "Escriba el primer apellido del alumno: " << endl;
            cin >> setw( 10 ) >> apellido;
            cout << "Escriba segundo y/o tercer apellido del alumno: " << endl;
            cin >> setw( 20 ) >> apellidos;
            cout << "Escriba la fecha de nacimiento del alumno: " << endl;
            cin >> setw( 15 ) >> nacimiento;
            cout << "Escriba el numero de Identificacion del alumno: " << endl;
            cin >> setw( 10 ) >> dpi;
            cout << "Escriba el telefono del alumno: " << endl;
            cin >> setw( 10 ) >> telefono;
            cout << "Escriba el correo del alumno: " << endl;
            cin >> setw( 30 ) >> correo;
            cout << "Escriba la direccion del alumno: " << endl;
            cin >> setw( 30 ) >> direccion;
            // usar valores para llenar los valores de la clave
            alumno.mestablecerClave( clave );
            alumno.mestablecerCarrera(carrera);
            alumno.mestablecerNombre( nombre );
            alumno.mestablecerNombres(nombres);
            alumno.mestablecerApellido(apellido);
            alumno.mestablecerApellidos(apellidos);
            alumno.mestablecerNacimiento(nacimiento);
            alumno.mestablecerDpi(dpi);
            alumno.mestablecerTelefono(telefono);
            alumno.mestablecerCorreo(correo);
            alumno.mestablecerDireccion(direccion);
            // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
            archivo.seekp( ( clave - 1 ) *
            sizeof( ClsasignacionAlumno ) );
            // insertar el registro en el archivo
            archivo.write(
             reinterpret_cast< const char * >( &alumno ),
             sizeof( Clsalumno ) );
            cout << "Alumno agregado con exito.";
       }
       // mostrar error si la clave ya esta ocupada
       else
       {
           cerr << "La clave #" << clave << " ya contiene informacion." << endl;
           getch();
       }
       alumno.~ClsasignacionAlumno();
   }
}
*/
ClsasignacionAlumno::~ClsasignacionAlumno()
{
    //dtor
}

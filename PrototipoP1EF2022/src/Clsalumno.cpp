#include "Clsalumno.h"

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

Clsalumno::Clsalumno(int clave, int carrera, string nombre, string nombres, string apellido, string apellidos, string nacimiento, string dpi, string telefono, string correo, string direccion)
{
    //ctor
    mestablecerClave(clave);
    mestablecerCarrera(carrera);
    mestablecerNombre(nombre);
    mestablecerNombres(nombres);
    mestablecerApellido(apellido);
    mestablecerApellidos(apellidos);
    mestablecerNacimiento(nacimiento);
    mestablecerDpi(dpi);
    mestablecerTelefono(telefono);
    mestablecerCorreo(correo);
    mestablecerDireccion(direccion);
}

int Clsalumno::mobtenerClave() const
{
    return iclave;
}

void Clsalumno::mestablecerClave (int entero)
{
    iclave = entero;
}

int Clsalumno::mobtenerCarrera() const
{
    return icarrera;
}

void Clsalumno::mestablecerCarrera (int entero)
{
    icarrera = entero;
}

string Clsalumno::mobtenerNombre() const
{
    return snombre;
}

void Clsalumno::mestablecerNombre( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 10 ? ilongitud : 9 );
   strncpy( snombre, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   snombre[ ilongitud ] = '\0';
}

string Clsalumno::mobtenerNombres() const
{
    return snombres;
}

void Clsalumno::mestablecerNombres( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 20 ? ilongitud : 19 );
   strncpy( snombres, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   snombres[ ilongitud ] = '\0';
}

string Clsalumno::mobtenerApellido() const
{
    return sapellido;
}

void Clsalumno::mestablecerApellido( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 10 ? ilongitud : 9 );
   strncpy( sapellido, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   sapellido[ ilongitud ] = '\0';
}

string Clsalumno::mobtenerApellidos() const
{
    return sapellidos;
}

void Clsalumno::mestablecerApellidos( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 20 ? ilongitud : 19 );
   strncpy( sapellidos, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   sapellidos[ ilongitud ] = '\0';
}

string Clsalumno::mobtenerNacimiento() const
{
    return snacimiento;
}

void Clsalumno::mestablecerNacimiento( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 15 ? ilongitud : 14 );
   strncpy( snacimiento, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   snacimiento[ ilongitud ] = '\0';
}

string Clsalumno::mobtenerDpi() const
{
    return sdpi;
}

void Clsalumno::mestablecerDpi( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 10 ? ilongitud : 9 );
   strncpy( sdpi, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   sdpi[ ilongitud ] = '\0';
}

string Clsalumno::mobtenerTelefono() const
{
    return stelefono;
}

void Clsalumno::mestablecerTelefono( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 10 ? ilongitud : 9 );
   strncpy( stelefono, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   stelefono[ ilongitud ] = '\0';
}

string Clsalumno::mobtenerCorreo() const
{
    return scorreo;
}

void Clsalumno::mestablecerCorreo( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 30 ? ilongitud : 29 );
   strncpy( scorreo, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   scorreo[ ilongitud ] = '\0';
}

string Clsalumno::mobtenerDireccion() const
{
    return sdireccion;
}

void Clsalumno::mestablecerDireccion( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 30 ? ilongitud : 29 );
   strncpy( sdireccion, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   sdireccion[ ilongitud ] = '\0';
}

Clsalumno::mcrearArchivo()
{
    ofstream archivo("alumno.dat", ios::out | ios::binary);
    if(!archivo)
    {
        cerr<<"No se habrio el archivo"<<endl;
        exit(1);
    }
    Clsalumno enBlanco;
    for(int i=0; i<100; i++)
    {
        archivo.write(reinterpret_cast<const char * > (&enBlanco), sizeof(Clsalumno));
    }
    enBlanco.~Clsalumno();
}

int Clsalumno::mobtenerIndicador(const char * const iindicador)
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

void Clsalumno::magregar(fstream &archivo)
{
   Clsalumno alumno;
   int clave = mobtenerIndicador( "Escriba el numero de alumno" );
   // desplazar el apuntador de posición del archivo hasta el registro correcto en el archivo
   archivo.seekg(
      ( clave - 1 ) * sizeof( Clsalumno ) );
   // leer el registro del archivo
   archivo.read( reinterpret_cast< char * >( &alumno ),
      sizeof( Clsalumno ) );
   // crear el registro, si éste no existe ya
   if ( alumno.mobtenerClave() == 0 )
   {
        //Atributos a ingresar
        int carrera=0;
        char nombre[10];
        char nombres[20];
        char apellido[10];
        char apellidos[20];
        char nacimiento[15];
        char dpi[10];
        char telefono[10];
        char correo[30];
        char direccion[30];
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
        sizeof( Clsalumno ) );
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
   alumno.~Clsalumno();
}

void Clsalumno::meliminar(fstream &archivo)
{
    int iindicador= mobtenerIndicador( "Escriba la clave a eliminar" );
    // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
    archivo.seekg(
    ( iindicador - 1 ) * sizeof( Clsalumno ) );
    // leer el registro del archivo
    Clsalumno alumno;
    archivo.read( reinterpret_cast< char * >( &alumno ),
    sizeof( Clsalumno ) );
    // eliminar el registro, si es que existe en el archivo
    if ( alumno.mobtenerClave() != 0 )
    {
        Clsalumno enBlanco;
        // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
        archivo.seekp( ( iindicador - 1 ) *
        sizeof( Clsalumno ) );
        // reemplazar el registro existente con un registro en blanco
        archivo.write(
        reinterpret_cast< const char * >( &enBlanco ),
        sizeof( Clsalumno ) );
        cout << "Empleado clave #" << iindicador << " eliminado correctamente.\n";
        enBlanco.~Clsalumno();
   }
   // mostrar error si el registro esta vacio
   else
   {
       cerr << "Empleado clave #" << iindicador << " esta vacia.\n";
   }
   getch();
}

void Clsalumno::mmostrarLineaRegistro( ostream &salida, const Clsalumno &registro )
{
    salida << left << setw( 10 ) << registro.mobtenerClave()
        << setw( 10 ) << registro.mobtenerCarrera()
          << setw( 10 ) << registro.mobtenerNombre().data()
          << setw( 20 ) << registro.mobtenerNombres().data()
          << setw( 10 ) << registro.mobtenerApellido().data()
          << setw( 20 ) << registro.mobtenerApellidos().data()
          << setw( 15 ) << registro.mobtenerNacimiento().data()
          << setw( 10 ) << registro.mobtenerDpi().data()
          << setw( 10 ) << registro.mobtenerTelefono().data()
          << setw( 30 ) << registro.mobtenerCorreo().data()
          << setw( 30 ) << registro.mobtenerDireccion().data()
          << endl;
}

void Clsalumno::mmodificar(fstream &archivo)
{
    Clsalumno alumno;
    int clave = mobtenerIndicador("Ingrese la clave del alumno");
    archivo.seekg(
    ( clave - 1 ) * sizeof( Clsalumno ) );
    // leer el primer registro del archivo
    archivo.read( reinterpret_cast< char * >( &alumno ),
    sizeof( Clsalumno ) );
    // actualizar el registro
    if ( alumno.mobtenerClave() != 0 )
    {
        mmostrarLineaRegistro( cout, alumno );
        cout << endl;
        //Atributos a ingresar
        char m_snombreEmpleado[10];
        char m_snombresEmpleado[20];
        char m_sapellidoEmpleado[10];
        char m_sapellidosEmpleado[20];
        int m_iCPuesto=0;
        char m_sdireccionEmpleado[20];
        char m_stelefonoEmpleado[10];
        char m_scorreoEmpleado[30];
        char m_ssexoEmpleado[10];
        char m_snacionalidadEmpleado[15];
        char m_snacimientoEmpleado[15];
       //Atributos a ingresar
        int carrera=0;
        char nombre[10];
        char nombres[20];
        char apellido[10];
        char apellidos[20];
        char nacimiento[15];
        char dpi[10];
        char telefono[10];
        char correo[30];
        char direccion[30];
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
        mmostrarLineaRegistro( cout, alumno );
        // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
        archivo.seekp(
        ( clave - 1 ) * sizeof( Clsalumno ) );
        // escribir el registro actualizado sobre el registro anterior en el archivo
        archivo.write(
        reinterpret_cast< const char * >( &alumno ),
        sizeof( Clsalumno ) );
        cout << "Empleado modificado con éxito.";
    }
    // mostrar error si la clave no contiene informacion
    else
    {
        cerr << "La la clave #" << clave
         << " no tiene informacion." << endl;
    }
    alumno.~Clsalumno();
}

void Clsalumno::mostrarLinea( const Clsalumno &archivo )
{
           cout << left << setw( 10 ) << archivo.mobtenerClave()
           << setw( 10 ) << archivo.mobtenerCarrera()
          << setw( 10 ) << archivo.mobtenerNombre().data()
          << setw( 20 ) << archivo.mobtenerNombres().data()
          << setw( 10 ) << archivo.mobtenerApellido().data()
          << setw( 20 ) << archivo.mobtenerApellidos().data()
          << setw( 15 ) << archivo.mobtenerNacimiento().data()
          << setw( 10 ) << archivo.mobtenerDpi().data()
          << setw( 10 ) << archivo.mobtenerTelefono().data()
          << setw( 30 ) << archivo.mobtenerCorreo().data()
          << setw( 30 ) << archivo.mobtenerDireccion().data()
          << endl;
}

void Clsalumno::mdesplegar(fstream &archivo)
{
    //Creando encabezado de la tabla
    cout << left << setw( 10 ) << "Clave"
    << setw( 10 ) << "Carrera"
    << setw( 10 ) << "Nombre"
    << setw( 20 ) << "Nombres"
    << setw( 10 ) << "Apellido"
    << setw( 20 ) << "Apellidos"
    << setw( 15 ) << "F. Nacimiento"
    << setw( 10 ) << "DPI"
    << setw( 10 ) << "Telefono"
    << setw( 30 ) << "Correo"
    << setw( 30 ) << "Direccion"
    << endl;
    // colocar el apuntador de posición de archivo al principio del archivo de registros
    archivo.seekg( 0 );
    // leer el primer registro del archivo de registros
    Clsalumno alumno;
    archivo.read( reinterpret_cast< char * >( &alumno ),
    sizeof( Clsalumno ) );
    // copiar todos los registros del archivo de registros en el archivo de texto
    while ( !archivo.eof() )
    {
        // escribir un registro individual en el archivo de texto
        if ( alumno.mobtenerClave() != 0 )
        mostrarLinea(alumno);
        // leer siguiente registro del archivo de registros
        archivo.read( reinterpret_cast< char * >( &alumno ),
        sizeof( Clsalumno ) );
    }
    alumno.~Clsalumno();
}

Clsalumno::~Clsalumno()
{
    //dtor
}

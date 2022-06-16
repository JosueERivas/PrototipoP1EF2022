#include "Clscarrera.h"

Clscarrera::Clscarrera(int clave, int semestre, string nombre, string cursos)
{
    //ctor
    mestablecerClave(clave);
    mestablecerSemestre(semestre);
    mestablecerNombre(nombre);
    mestablecerCursos(cursos);
}

int Clscarrera::mobtenerClave() const
{
    return iclave;
}

void Clscarrera::mestablecerClave (int entero)
{
    iclave = entero;
}

int Clscarrera::mobtenerSemestre() const
{
    return isemestre;
}

void Clscarrera::mestablecerSemestre (int entero)
{
    isemestre = entero;
}

string Clscarrera::mobtenerNombre() const
{
    return snombre;
}

void Clscarrera::mestablecerNombre( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 10 ? ilongitud : 9 );
   strncpy( snombre, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   snombre[ ilongitud ] = '\0';
}

string Clscarrera::mobtenerCursos() const
{
    return scursos;
}

void Clscarrera::mestablecerCursos( string cadena )
{
   // copiar a lo más 20 caracteres de la cadena
   const char *valor = cadena.data();
   int ilongitud = strlen( valor );
   ilongitud = ( ilongitud < 100 ? ilongitud : 99 );
   strncpy( scursos, valor, ilongitud );
   // anexar caracter nulo al final de la cadena
   scursos[ ilongitud ] = '\0';
}

Clscarrera::mcrearArchivo()
{
    ofstream archivo("carrera.dat", ios::out | ios::binary);
    if(!archivo)
    {
        cerr<<"No se habrio el archivo"<<endl;
        exit(1);
    }
    Clscarrera enBlanco;
    for(int i=0; i<100; i++)
    {
        archivo.write(reinterpret_cast<const char * > (&enBlanco), sizeof(Clscarrera));
    }
    enBlanco.~Clscarrera();
}

int Clscarrera::mobtenerIndicador(const char * const iindicador)
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

void Clscarrera::magregar(fstream &archivo)
{
   Clscarrera carrera;
   int clave = mobtenerIndicador( "Escriba el numero de carrera" );
   // desplazar el apuntador de posición del archivo hasta el registro correcto en el archivo
   archivo.seekg(
      ( clave - 1 ) * sizeof( Clscarrera ) );
   // leer el registro del archivo
   archivo.read( reinterpret_cast< char * >( &carrera ),
      sizeof( Clscarrera ) );
   // crear el registro, si éste no existe ya
   if ( carrera.mobtenerClave() == 0 )
   {
        //Atributos a ingresar
        int semestre=0;
        char nombre[10];
        char cursos[100];
        //Solicitud al usuario de llenar los atributos
        cout << "Escriba la clave de la carrera del carrera: " << endl;
        cin >> setw( 10 ) >> semestre;
        cout << "Escriba el primer nombre del carrera: " << endl;
        cin >> setw( 10 ) >> nombre;
        cout << "Escriba los cursos de semestre de la carrera: " << endl;
        cin >> setw( 100 ) >> cursos;
        // usar valores para llenar los valores de la clave
        carrera.mestablecerClave( clave );
        carrera.mestablecerSemestre(semestre);
        carrera.mestablecerNombre( nombre );
        carrera.mestablecerCursos(cursos);
        // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
        archivo.seekp( ( clave - 1 ) *
        sizeof( Clscarrera ) );
        // insertar el registro en el archivo
        archivo.write(
         reinterpret_cast< const char * >( &carrera ),
         sizeof( Clscarrera ) );
        cout << "Alumno agregado con exito.";
   }
   // mostrar error si la clave ya esta ocupada
   else
   {
       cerr << "La clave #" << clave << " ya contiene informacion." << endl;
       getch();
   }
   carrera.~Clscarrera();
}

void Clscarrera::meliminar(fstream &archivo)
{
    int iindicador= mobtenerIndicador( "Escriba la clave a eliminar" );
    // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
    archivo.seekg(
    ( iindicador - 1 ) * sizeof( Clscarrera ) );
    // leer el registro del archivo
    Clscarrera carrera;
    archivo.read( reinterpret_cast< char * >( &carrera ),
    sizeof( Clscarrera ) );
    // eliminar el registro, si es que existe en el archivo
    if ( carrera.mobtenerClave() != 0 )
    {
        Clscarrera enBlanco;
        // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
        archivo.seekp( ( iindicador - 1 ) *
        sizeof( Clscarrera ) );
        // reemplazar el registro existente con un registro en blanco
        archivo.write(
        reinterpret_cast< const char * >( &enBlanco ),
        sizeof( Clscarrera ) );
        cout << "Curso clave #" << iindicador << " eliminado correctamente.\n";
        enBlanco.~Clscarrera();
   }
   // mostrar error si el registro esta vacio
   else
   {
       cerr << "Curso clave #" << iindicador << " esta vacia.\n";
   }
   getch();
}

void Clscarrera::mmostrarLineaRegistro( ostream &salida, const Clscarrera &registro )
{
    salida << left << setw( 10 ) << registro.mobtenerClave()
        << setw( 10 ) << registro.mobtenerSemestre()
          << setw( 10 ) << registro.mobtenerNombre().data()
          << setw( 100 ) << registro.mobtenerCursos().data();
}

void Clscarrera::mmodificar(fstream &archivo)
{
    Clscarrera carrera;
    int clave = mobtenerIndicador("Ingrese la clave del carrera");
    archivo.seekg(
    ( clave - 1 ) * sizeof( Clscarrera ) );
    // leer el primer registro del archivo
    archivo.read( reinterpret_cast< char * >( &carrera ),
    sizeof( Clscarrera ) );
    // actualizar el registro
    if ( carrera.mobtenerClave() != 0 )
    {
        mmostrarLineaRegistro( cout, carrera );
        cout << endl;
       //Atributos a ingresar
        int semestre=0;
        char nombre[10];
        char curso[100];
        //Solicitud al usuario de llenar los atributos
        cout << "Escriba la clave de la carrera del carrera: " << endl;
        cin >> setw( 10 ) >> semestre;
        cout << "Escriba el primer nombre del carrera: " << endl;
        cin >> setw( 10 ) >> nombre;
        cout << "Escriba segundo y/o tercer nombre del carrera: " << endl;
        cin >> setw( 100 ) >> curso;
        // usar valores para llenar los valores de la clave
        carrera.mestablecerClave( clave );
        carrera.mestablecerSemestre(semestre);
        carrera.mestablecerNombre( nombre );
        carrera.mestablecerCursos(curso);
        mmostrarLineaRegistro( cout, carrera );
        // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
        archivo.seekp(
        ( clave - 1 ) * sizeof( Clscarrera ) );
        // escribir el registro actualizado sobre el registro anterior en el archivo
        archivo.write(
        reinterpret_cast< const char * >( &carrera ),
        sizeof( Clscarrera ) );
        cout << "Carrera modificado con éxito.";
    }
    // mostrar error si la clave no contiene informacion
    else
    {
        cerr << "La la clave #" << clave
         << " no tiene informacion." << endl;
    }
    carrera.~Clscarrera();
}

void Clscarrera::mostrarLinea( const Clscarrera &archivo )
{
           cout << left << setw( 10 ) << archivo.mobtenerClave()
           << setw( 10 ) << archivo.mobtenerSemestre()
          << setw( 10 ) << archivo.mobtenerNombre().data()
          << setw( 100 ) << archivo.mobtenerCursos().data()
          << endl;
}

void Clscarrera::mdesplegar(fstream &archivo)
{
    //Creando encabezado de la tabla
    cout << left << setw( 10 ) << "Clave"
    << setw( 10 ) << "Semestre"
    << setw( 10 ) << "Nombre"
    << setw( 20 ) << "Cursos"
    << endl;
    // colocar el apuntador de posición de archivo al principio del archivo de registros
    archivo.seekg( 0 );
    // leer el primer registro del archivo de registros
    Clscarrera carrera;
    archivo.read( reinterpret_cast< char * >( &carrera ),
    sizeof( Clscarrera ) );
    // copiar todos los registros del archivo de registros en el archivo de texto
    while ( !archivo.eof() )
    {
        // escribir un registro individual en el archivo de texto
        if ( carrera.mobtenerClave() != 0 )
        mostrarLinea(carrera);
        // leer siguiente registro del archivo de registros
        archivo.read( reinterpret_cast< char * >( &carrera ),
        sizeof( Clscarrera ) );
    }
    carrera.~Clscarrera();
}

Clscarrera::~Clscarrera()
{
    //dtor
}

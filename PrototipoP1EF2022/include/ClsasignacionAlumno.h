#ifndef CLSASIGNACIONALUMNO_H
#define CLSASIGNACIONALUMNO_H

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

class ClsasignacionAlumno
{
    public:
        ClsasignacionAlumno(int = 0, int = 0, int = 0, int = 0, string ="", string ="", string ="", string ="");
        void mestablecerClave( int ) ;
        int mobtenerClave() const;
        void mestablecerClaveAlumno( int ) ;
        int mobtenerClaveAlumno() const;
        void mestablecerClaveCarrera( int ) ;
        int mobtenerClaveCarrera() const;
        void mestablecerNombre( string );
        string mobtenerNombre() const;
        void mestablecerApellido( string );
        string mobtenerApellido() const;
        void mestablecerNombreCarrera( string );
        string mobtenerNombreCarrera() const;
        void mestablecerSemestre( int ) ;
        int mobtenerSemestre() const;
        void mestablecerCursos( string );
        string mobtenerCursos() const;
        mcrearArchivo();
        int mobtenerIndicador( const char * const );
        /*void magregar(fstream &archivo);
        void mostrarLinea( const Clscarrera &archivo );
        void mdesplegar(fstream &archivo);*/
        virtual ~ClsasignacionAlumno();

    protected:

    private:
        int iclave;
        int iclaveAlumno;
        int iclaveCarrera;
        int isemestre;
        char snombre[10];
        char sapellido[10];
        char snombreCarrera[10];
        char scursos[100];
};

#endif // CLSASIGNACIONALUMNO_H

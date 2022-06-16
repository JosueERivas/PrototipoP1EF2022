#ifndef CLSCARRERA_H
#define CLSCARRERA_H

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

class Clscarrera
{
    public:
        Clscarrera(int = 0, int = 0, string ="", string ="");
        void mestablecerClave( int ) ;
        int mobtenerClave() const;
        void mestablecerSemestre( int ) ;
        int mobtenerSemestre() const;
        void mestablecerNombre( string );
        string mobtenerNombre() const;
        void mestablecerCursos( string );
        string mobtenerCursos() const;
        mcrearArchivo();
        int mobtenerIndicador( const char * const );
        void magregar(fstream &archivo);
        void meliminar(fstream &archivo);
        void mmostrarLineaRegistro( ostream &salida, const Clscarrera &registro );
        void mmodificar(fstream &archivo);
        void mostrarLinea( const Clscarrera &archivo );
        void mdesplegar(fstream &archivo);
        virtual ~Clscarrera();

    protected:

    private:
        int iclave;
        int isemestre;
        char snombre[10];
        char scursos[100];
};

#endif // CLSCARRERA_H

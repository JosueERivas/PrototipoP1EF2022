#ifndef CLSMAESTRO_H
#define CLSMAESTRO_H

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

class Clsmaestro
{
    public:
        Clsmaestro(int = 0, int = 0, string ="", string ="", string ="", string ="", string ="", string ="", string ="", string ="", string ="");
        void mestablecerClave( int ) ;
        int mobtenerClave() const;
        void mestablecerCarrera( int ) ;
        int mobtenerCarrera() const;
        void mestablecerNombre( string );
        string mobtenerNombre() const;
        void mestablecerNombres( string );
        string mobtenerNombres() const;
        void mestablecerApellido( string );
        string mobtenerApellido() const;
        void mestablecerApellidos( string );
        string mobtenerApellidos() const;
        void mestablecerNacimiento( string );
        string mobtenerNacimiento() const;
        void mestablecerDpi( string );
        string mobtenerDpi() const;
        void mestablecerTelefono( string );
        string mobtenerTelefono() const;
        void mestablecerCorreo( string );
        string mobtenerCorreo() const;
        void mestablecerDireccion( string );
        string mobtenerDireccion() const;
        mcrearArchivo();
        int mobtenerIndicador( const char * const );
        void magregar(fstream &archivo);
        void meliminar(fstream &archivo);
        void mmostrarLineaRegistro( ostream &salida, const Clsmaestro &registro );
        void mmodificar(fstream &archivo);
        void mostrarLinea( const Clsmaestro &archivo );
        void mdesplegar(fstream &archivo);
        virtual ~Clsmaestro();

    protected:

    private:
        int iclave;
        int icarrera;
        char snombre[10];
        char snombres[20];
        char sapellido[10];
        char sapellidos[20];
        char snacimiento[15];
        char sdpi[10];
        char stelefono[10];
        char scorreo[30];
        char sdireccion[30];
};

#endif // CLSMAESTRO_H

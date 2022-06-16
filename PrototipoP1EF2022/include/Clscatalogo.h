#ifndef CLSCATALOGO_H
#define CLSCATALOGO_H

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

class Clscatalogo
{
    public:
        Clscatalogo();
        mmenuCatalogo();
        void mmenuCrud(string);
        virtual ~Clscatalogo();

    protected:

    private:
};

#endif // CLSCATALOGO_H

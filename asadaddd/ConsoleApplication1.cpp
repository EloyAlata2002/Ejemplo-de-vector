// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "Manejador.h"

using namespace std;
using namespace System;
//using namespace Sys;

int main (void)
{

	char tecla;
	CManejador objman;
	while (1)
	{
		if (kbhit())
		{	tecla = toupper(_getch());
		    if (tecla == 'C' || tecla=='T' )
			    objman.Insertar(tecla);		   
			if (tecla == 'H')	objman.Cambiar_Direccion_Horizontal();
			if (tecla == 'V')	objman.Cambiar_Direccion_Vertical();
			if (tecla == 'R')	objman.Cambiar_Relleno();
		}
		objman.Dibujar();
		_sleep(50);
		objman.Borrar();
		objman.Mover();
	}


_getch();
    return 0;

}



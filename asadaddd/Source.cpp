#include "Manejador.h"
#include <conio.h>
void main()
{
	char tecla;
	CManejador objman;
	while (1)
	{
		if (kbhit())
		{	tecla = toupper(_getch());
		    if (tecla == 'C' || tecla == 'T')
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
}
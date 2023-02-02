#include "CControlador.h"
#include <conio.h>
void main()
{
	srand(time(NULL));
	CControlador obj = CControlador();
	obj.Generar();
	
	
		obj.PintaTriangulos();
	_getch();
}
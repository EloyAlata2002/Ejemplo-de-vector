#include "Manejador.h"
#include <conio.h>
void main()
{
	CManeja objman = CManeja();
	objman.Generar();
    objman.Mostrar();
	_getch();
}
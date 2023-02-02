#pragma once
#include "Figura.h"
class CCuadrado:public CFigura
{private:
	int tipo; //1 seran verdes verticales 2 amarillos horizontales
	int relleno;	
public:
	//constructor o destructor
	CCuadrado();
	CCuadrado(int px, int py, int pdx, int pdy, int ptipo, int plado);
	//acciones o metodos propios
	void Dibujar();
	void cambiaDx();
	void cambiaDy();
	void cambiaRelleno();


};
CCuadrado::CCuadrado() {}
CCuadrado::CCuadrado(int px, int py, int pdx, int pdy, int ptipo, int plado)
	:CFigura(px, py, pdx, pdy, plado)
{	tipo = ptipo;
	relleno = 1;
}
void CCuadrado::Dibujar()
{
	
	if (tipo==1)
		Console::ForegroundColor = ConsoleColor::Green;
	else 
		Console::ForegroundColor = ConsoleColor::Yellow;
	int px = x, py = y;
	if (relleno == 1) //prendido
	{
		for (int i = 1; i <= lado; i++)
		{
			Console::SetCursorPosition(px, py);
			for (int j = 1; j <= lado; j++)
				cout << '*';
			py++;
		}
	}
	else //apagado relleno 0
	{
		for (int i = 1; i <= lado; i++)
		{
			Console::SetCursorPosition(px, py);
			for (int j = 1; j <= lado; j++)
				if (i == 1 || i == lado || j == 1 || j == lado)
					cout << '*';
				else
					cout << ' ';
			py++;
		}
	}

}
void CCuadrado::cambiaDx()
{	dx = dx*-1;
}
void CCuadrado::cambiaDy()
{	dy = dy*-1;
}
void CCuadrado::cambiaRelleno()
{
	if (relleno == 1) relleno = 0;
	else relleno = 1;
}

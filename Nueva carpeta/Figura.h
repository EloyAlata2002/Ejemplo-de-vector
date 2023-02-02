#pragma once
#include<iostream>
using namespace std;
using namespace System;
class CFigura
{
protected :
	int x, y, dx,dy, lado;
public:
	CFigura();
	CFigura(int px,int py,int pdx,int pdy,int plado);	
	void Mover();	
	void Borrar();
	virtual void Dibujar() {};
	virtual void cambiaDx() {};
	virtual void cambiaDy() {};
	virtual void cambiaRelleno() {};
};
CFigura::CFigura() {}
CFigura::CFigura(int px, int py, int pdx,int pdy, int plado)
{	x = px;
	y = py;
	dx = pdx;
	dy = pdy;
	lado = plado;
}
void CFigura::Mover()
{	if (x + dx <= 0 || x + dx + lado >= 79)
		dx = dx * -1;
	if (y + dy <= 0 || y + dy + lado >= 24)
		dy = dy * -1;

	x = x + dx;
	y = y + dy;
}
void CFigura::Borrar()
{	int px = x, py = y; 
	for (int i = 1; i <= lado; i++)
	{	Console::SetCursorPosition(px,py);
		for (int j = 1; j <= lado; j++)
			cout << ' ';
		py++;
	}
}
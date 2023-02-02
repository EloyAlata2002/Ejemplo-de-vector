#pragma once
#include "CFigura.h" 
#include "iostream"
using namespace std;
using namespace System;
class CCuadrado : public CFigura 
{
private:
	int color;
public:
	CCuadrado();
	CCuadrado(int _x, int _y, int _N, int _color);
	void Mostrar();
};
CCuadrado::CCuadrado() {}
CCuadrado::CCuadrado(int _x, int _y, int _N, int _color) :CFigura(_x, _y, _N)
{
	color = _color;
}
void CCuadrado::Mostrar()
{
	int px = x, py = y;
	Console::ForegroundColor = (ConsoleColor)color;
	for (int fila = 1; fila <= N; fila++)
	{
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= N; col++)
			cout << "* ";
		py++;
	}
}
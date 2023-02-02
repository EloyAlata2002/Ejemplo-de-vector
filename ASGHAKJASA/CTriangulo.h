#pragma once
#include "CFigura.h" 
#include "iostream"
using namespace std;
using namespace System;
class CTriangulo : public CFigura 
{
private:
	int color;
public:
	CTriangulo();
	CTriangulo(int _x, int _y, int _N,int _color);
	void Mostrar();
	
};
CTriangulo::CTriangulo() {}
CTriangulo::CTriangulo(int _x, int _y,int _N, int _color) :CFigura(_x, _y,_N)
{
	color = _color;
}
void CTriangulo::Mostrar()
{
	int px = x, py = y;
	Console::ForegroundColor = (ConsoleColor)color;
	for (int fila = 1; fila <= N; fila++)
	{
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++)
			cout << "* ";
		py++;
	}
}
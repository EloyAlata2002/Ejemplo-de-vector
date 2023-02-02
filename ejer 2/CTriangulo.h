#pragma once
#include "Triangulo.h"
using namespace System;
class CCtriangulo : public CFigura
{

private:
	int x, y;
public:
	CCtriangulo();
	CCtriangulo(int _N);
	void Pinta();
};
CCtriangulo::CCtriangulo(){}
CCtriangulo::CCtriangulo( int _N) :CFigura(_N)
{
	x = rand() % 99 + 1;
	y = rand() %  21 + 1;
	
}
void CCtriangulo::Pinta()
{
	Console::ForegroundColor=(ConsoleColor)color;
	int px = x, py = y;
	for (int fila = 1; fila <= N; fila++)
	{
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++)
			cout << "*";
		py++;

	}
}
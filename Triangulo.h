#pragma once
#include "Figura.h"
class CTriangulo :public CFigura
{private:
	char car; //caracter para pintar el triangulo
public:
	CTriangulo();
	CTriangulo(int _x, int _y, int _dx, int _dy,int _lado, char _car);
	void Dibujar();
};
CTriangulo::CTriangulo() {}
CTriangulo::CTriangulo(int _x, int _y,int _dx, int _dy, int _lado, char _car) 
	         :CFigura(_x, _y, _dx, _dy, _lado)
{	car = _car;   
}
void CTriangulo::Dibujar()
{	int px = x, py = y;
	Console::ForegroundColor = ConsoleColor::Red;
	for (int fila = 1; fila <= lado; fila++)
	{	Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++)
			cout << car;
		py++;
	}
}

#pragma once
#include "CCuadrado.h"
#include "CTriangulo.h"
#include "CRectangulo.h"
class CManeja
{
private:
	CCuadrado obj1;
	CRectangulo obj2;
	CTriangulo obj3;
public:
	CManeja();
	void Generar();
	void Mostrar();
};
CManeja::CManeja() {}
void CManeja::Generar()
{
	obj1 = CCuadrado(5,10,4,4);
	obj2 = CRectangulo(40, 6, 10, 10);
	obj3 = CTriangulo(30,18,8,6);
}
void CManeja::Mostrar()
{
	obj1.Mostrar(); obj2.Mostrar(); obj3.Mostrar();
}
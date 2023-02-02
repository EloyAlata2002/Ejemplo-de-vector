#pragma once
#include "CTriangulo.h"
class CControlador
{
private:
	CCtriangulo obj;
	CCtriangulo obj1;
	CCtriangulo obj2;
	CCtriangulo obj3;
	CCtriangulo obj4;
public:
	CControlador();
	void Generar();
	void PintaTriangulos();
};
CControlador::CControlador(){}
void CControlador::Generar()
{
		obj=   CCtriangulo(4);
		obj1=  CCtriangulo(5);
		obj2=  CCtriangulo(3);
		obj3=  CCtriangulo(4);
		obj4=  CCtriangulo(6);
}
void CControlador::PintaTriangulos()
{
	obj.Pinta(); obj1.Pinta(); obj2.Pinta(); obj3.Pinta(); obj4.Pinta();
}
#pragma once
#include "Cuadrado.h"
#include "Triangulo.h"
#include <vector>
class CManejador
{
private:
	vector <CFigura *> vecfig;
	//polimorfismo es que un puntero padre puede apuntar a un objeto hijo
public:
	CManejador();
	void Insertar(char letra);
	void Dibujar();
	void Mover();
	void Borrar();
	void Cambiar_Direccion_Vertical();
	void Cambiar_Direccion_Horizontal();
	void Cambiar_Relleno();
};
CManejador::CManejador(){}

void CManejador::Insertar(char tecla)
{
	Random f;
	if (tecla == 'C')
	{
		int tipo = f.Next(1, 3);
		if (tipo == 1)  //vertical
			vecfig.push_back(new CCuadrado(f.Next(1, 70), f.Next(1, 10), 0, 1, tipo, f.Next(2, 5)));
		if (tipo == 2)  //horizontal
			vecfig.push_back(new CCuadrado(f.Next(1, 70), f.Next(1, 10), 1, 0, tipo, f.Next(2, 5)));
	}
	if (tecla == 'T')
		vecfig.push_back(new CTriangulo(f.Next(1, 70), f.Next(8, 18), f.Next(-1, 2), f.Next(-1, 2),f.Next(2,5),f.Next('A', 'Z' + 1)));
}

void CManejador::Dibujar()
{
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->Dibujar();
}

void CManejador::Mover()
{
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->Mover();	
}
void CManejador::Borrar()
{
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->Borrar();
}
void CManejador::Cambiar_Direccion_Vertical()
{
	for (int i = 0; i< vecfig.size(); i++)
		vecfig[i]->cambiaDy();
}

void CManejador::Cambiar_Direccion_Horizontal()
{
	for (int i = 0; i< vecfig.size(); i++)
		vecfig[i]->cambiaDx();
}

void CManejador::Cambiar_Relleno()
{
	for (int i = 0; i < vecfig.size(); i++)
		vecfig[i]->cambiaRelleno();
			
}
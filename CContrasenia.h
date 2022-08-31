#pragma once
#include <iostream>
using namespace std;
using namespace System;
class CContrasenia
{
public:
	CContrasenia()
	{
		longitud = 8;
		contrasenia = "";
		generarContrasenia();
	}
	CContrasenia(int plongitud)
	{
		longitud = plongitud;
		contrasenia = "";
		generarContrasenia();
	}
	~CContrasenia() {}
	void generarContrasenia()
	{
		for (int i = 0; i < longitud; i++)
			switch (rand() % 3)
			{
			case 0: contrasenia += char(48 + rand() % (57 - 48 + 1)); break;
			case 1: contrasenia += char(65 + rand() % (90 - 65 + 1)); break;
			case 2: contrasenia += char(97 + rand() % (122 - 97 + 1)); break;
			}
			
	}
	int getlongitud() { return longitud; }
	string getcontrasenia() { return contrasenia; }
	void setlongitud(int plongitud)
	{
		longitud = plongitud;
	}
	void setcontrasenia(string valor)
	{
		contrasenia = valor;
	}
	bool esSeguro()
	{
		int cMayus = 0, cMinus = 0, cNum = 0;
		for (int i = 0; i < contrasenia.length(); i++)
			if ((int)contrasenia[i] >= 65 && (int)contrasenia[i] <= 90) cMayus++;
			else if((int)contrasenia[i] >= 97 && (int)contrasenia[i] <= 122) cMinus++;
			else if((int)contrasenia[i] >= 48 && (int)contrasenia[i] <= 57) cNum++;
		if (cMayus > 2 && cMinus > 1 && cNum > 5) return true;
		return false;
	}
	
private:
	int longitud;
	string contrasenia;
};
#include <vector>
#include <conio.h>
#include "CContrasenia.h"
void main()
{
	srand(time(NULL));
	int tamanio = 5 + rand() % 6;
	vector<CContrasenia*> contrasenias;
	vector<bool> esSeguro;
	for (int i = 0; i < tamanio; i++)
		contrasenias.push_back(new CContrasenia(20));
	contrasenias.at(contrasenias.size() - 1)->setcontrasenia("HDGDdbhb1564562");
	for (int i = 0; i < tamanio; i++)
		if (contrasenias[i]->esSeguro())
			esSeguro.push_back(true);
		else
			esSeguro.push_back(false);
	for (int i = 0; i < tamanio; i++)
		cout << "Contraseña : " << contrasenias[i]->getcontrasenia() << " Es seguro : " << esSeguro[i] << endl;
	getch();
}
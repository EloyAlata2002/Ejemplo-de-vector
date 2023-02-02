#pragma once
#include "iostream"
using namespace std;
class CFigura
{
protected:
	int N,color;
public:
	CFigura();
	CFigura(int _N);
};
CFigura::CFigura() {}
CFigura::CFigura(int _N) 
{
 N = _N;
 color = rand() % 5 + 1;
}

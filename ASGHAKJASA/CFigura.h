#pragma once
class CFigura
{
protected:
	int x, y,N; 
public:
	CFigura();
	CFigura(int _x, int _y,int _N);
};
CFigura::CFigura() {}
CFigura::CFigura(int _x, int _y,int _N)
{
	x = _x; y = _y; N = _N;
}
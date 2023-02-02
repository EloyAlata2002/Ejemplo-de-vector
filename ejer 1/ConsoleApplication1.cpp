// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include <vector>


using namespace std;



int main ()
{

	vector<int> v(6);

	v[0]=1;
	v[1]=2;
	v[2]=3;
	v[3]=4;
	v[4]=5;
	v[5]=6;

  vector<int> w;

  while (!v.empty())
  {
    w.push_back(v.back());
    v.pop_back();
  }

  for (size_t i = 0; i < w.size(); ++i)
    cout << w[i] << " ";
  cout << endl;

_getch();
    return 0;

}



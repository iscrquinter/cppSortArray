// cppSortArray.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int Arreglo[10], i, Auxiliar, Switch;

	for (i = 0; i <= 9; i++)
	{
		cout << "Elemento[" << i << "]:";
		cin >> Arreglo[i];
	}

	do
	{
		Switch = 0;
		for (i = 1; i <= 9; i++)
		{
			if (Arreglo[i - 1]>Arreglo[i])
			{
				Auxiliar = Arreglo[i - 1];
				Arreglo[i - 1] = Arreglo[i];
				Arreglo[i] = Auxiliar;
				Switch = 1;
			}
		}
	} while (Switch != 0);

	cout << endl << "Vector ordenado de forma ascendente:" << endl;

	for (i = 0; i <= 9; i++)
		cout << "Elemento[" << i << "]:" << Arreglo[i] << endl;

	system("PAUSE");
	return 0;
}


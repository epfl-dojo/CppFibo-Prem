#include "stdafx.h"
#include <iostream>
#include <stdint.h>

using namespace std;

void main(void)
{
	
	 long int   inNombre1 = 0;
	 long int  inNombre2 = 1;
	 long int  inCompteur = 0;

	while (inCompteur < 100)
	{
		cout << inNombre2 << endl;
		int somme = inNombre1 + inNombre2; 
		inNombre1 = inNombre2;
		inNombre2 = somme;
		inCompteur++;
	}

	system("pause");
	
}


#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std: vector<int> nombrePrem;
	nombrePrem.push_back(2);

	for (int nbTest = 2; nbTest < 1000; nbTest++)
	{	
		bool prem = true;
		
		for (int index = 0; prem == true && index < nombrePrem.size();)
		{
			if ((nbTest % nombrePrem[index]) == 0)
			{
				prem = false;
			}
			else {
				index++;
			}
		}

		if (prem == true)
		{
			nombrePrem.push_back(nbTest);
		}
	}
	int i = 0;
	while (i<nombrePrem.size())
	{
		cout << nombrePrem[i] << endl;
		i++;

	}

	cout << "Taille du vecteur: "<<nombrePrem.size() << endl;
	system("pause");
}

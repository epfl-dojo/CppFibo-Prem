#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std: vector<int> nombrePrem;
	nombrePrem.push_back(2);
	int nbTest = 2;

	while (nbTest < 1000)
	{
		bool prem = true;
		int index = 0;
		nbTest++;
		while (prem == true && index < nombrePrem.size())
		{
			if ((nbTest % nombrePrem[index])== 0)
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
	for (int i = 0; i < nombrePrem.size(); i++)
	{
		cout << nombrePrem[i] << endl;

	}

	cout << "Taille du vecteur: " << nombrePrem.size() << endl;
	system("pause");
}


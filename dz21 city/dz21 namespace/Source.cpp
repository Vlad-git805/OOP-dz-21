#include <iostream>
#include "Kiev.h"
#include "Moscow.h"
#include "Washington.h"
using namespace std;

int main()
{
	America::Washington washington(150000);
	Russia::Moscow moscow(100000);
	Ukraine::Kiev kiev(5000000);
	if (washington.Getpeople() > moscow.Getpeople())
	{
		cout << "Peoples in Washington are more than in Moscow" << endl;
	}
	else
	{
		cout << "Peoples in Washington are less than in Moscow" << endl;
	}

	system("pause");
	return 0;
}
#pragma once
#include <iostream>
using namespace std;
namespace Russia
{
	class Moscow
	{
	private:
		int count_of_people;
	public:
		Moscow();
		Moscow(int count_of_people);
		int Getpeople()const;
		~Moscow();
	};
}


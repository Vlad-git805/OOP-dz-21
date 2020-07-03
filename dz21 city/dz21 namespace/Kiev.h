#pragma once
#include <iostream>
using namespace std;
namespace Ukraine
{
	class Kiev
	{
	private:
		int count_of_people;
	public:
		Kiev();
		Kiev(int count_of_people);
		int Getpeople()const;
		~Kiev();
	};
}


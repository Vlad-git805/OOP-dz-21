#include "Washington.h"

using namespace America;

America::Washington::Washington() : Washington(0) {}

America::Washington::Washington(int count_of_people) : count_of_people(count_of_people)
{
}

int America::Washington::Getpeople() const
{
	return count_of_people;
}


America::Washington::~Washington()
{
}

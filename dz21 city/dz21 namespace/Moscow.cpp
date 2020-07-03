#include "Moscow.h"

using namespace Russia;

Moscow::Moscow() : count_of_people(0) {}

Russia::Moscow::Moscow(int count_of_people) : count_of_people(count_of_people) {}

int Russia::Moscow::Getpeople() const
{
	return count_of_people;
}

Moscow::~Moscow()
{
}

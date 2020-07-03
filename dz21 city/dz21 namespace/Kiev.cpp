#include "Kiev.h"

using namespace Ukraine;

Kiev::Kiev() : count_of_people(0) {}

Kiev::Kiev(int count_of_people) : count_of_people(count_of_people) {}

int Kiev::Getpeople()const
{
	return count_of_people;
}

Kiev::~Kiev()
{
}

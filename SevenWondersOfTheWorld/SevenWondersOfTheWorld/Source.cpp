#include <iostream>
#include "AlexandriaLighthouse.h"
#include "ColossusOfRhodes.h"
#include "HangingGardensOfTheSemiramis.h"
#include "MausoleumInHalicarnassus.h"
#include "PyramidOfCheops.h"
#include "StatueOfZeusInOlympia.h"
#include "TempleOfArtemis.h"
using namespace std;

int main()
{
	SevenWondersOfTheWorld::Alexandr::AlexandriaLighthouse alexandriaLighthouse;
	alexandriaLighthouse.Show();

	SevenWondersOfTheWorld::Artemis::TempleOfArtemis templeOfArtemis;
	templeOfArtemis.Show();

	SevenWondersOfTheWorld::Colossus::ColossusOfRhodes colossusOfRhodes;
	colossusOfRhodes.Show();

	SevenWondersOfTheWorld::HangingGardens::HangingGardensOfTheSemiramis hangingGardensOfTheSemiramis;
	hangingGardensOfTheSemiramis.Show();

	SevenWondersOfTheWorld::Mausoleum::MausoleumInHalicarnassus mausoleumInHalicarnassus;
	mausoleumInHalicarnassus.Show();

	SevenWondersOfTheWorld::Pyramid::PyramidOfCheops pyramidOfCheops;
	pyramidOfCheops.Show();

	SevenWondersOfTheWorld::StatueOfZeus::StatueOfZeusInOlympia statueOfZeusInOlympia;
	statueOfZeusInOlympia.Show();

	system("pause");
	return 0;
}
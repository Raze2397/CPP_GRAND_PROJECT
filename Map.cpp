#include "Map.h"
#include "Settlement.h"
#include "World.h"

Map::Map(World world)
{
	//??? not sure if it should be that way - check it!
	settlements = new Settlement*[world.DEFAULT_SETTLEMENT_COUNT];
	for (short counter = 0; counter < world.DEFAULT_SETTLEMENT_COUNT; counter++) {
		settlements[counter] = world.getSettlementArray()[counter];
	}
}

Map::Map(Settlement settlement)
{
}


Map::~Map()
{
}

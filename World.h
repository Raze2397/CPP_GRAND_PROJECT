#include "Map.h"
#include "Settlement.h"
class World 	
{
protected:
	short settlementCount = 1; // for test purposes 1 - change it later
	Map* map;
	Settlement* settlements;
public:
	World();
	~World();
};

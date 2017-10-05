#include "Map.h"
#include "Settlement.h"
class World 	
{
protected:
	Map* map;
	Settlement* settlements;
public:
	World();
	~World();
};

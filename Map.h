#pragma once
class World;
class Settlement;
class Map
{
protected:
	Settlement** settlements;
public:

	Map(World world);
	Map(Settlement settlement);
	~Map();
};

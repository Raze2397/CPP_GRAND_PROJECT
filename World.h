#pragma once
class Map;
class Settlement;
class Player;
class World 	
{
protected:
	 // for test purposes 3 - change it later
	Map* map;
	Settlement** settlements;
	Player* player;
	virtual void initializeSettlements();
public:
	static const short DEFAULT_SETTLEMENT_COUNT = 3;
	World();
	~World();
	Player* getPlayerAddress() const;
	void setPlayerAddress(Player* _player);
	Settlement** getSettlementArray();
};

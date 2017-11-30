#pragma once
#include "Vendor.h"
#include "QuestNPC.h"
#include "Fateweaver.h"
#include "NonInteractableNPC.h"
class Map;
class Settlement
{
protected:
	//static const int DEFAULT_INTERACTIBLE_NPC_COUNT=100;
	static const int MAX_VENDOR_COUNT = 20;
	static const int MAX_QUESTNPC_COUNT = 20;
	static const int MAX_FATEWEAVER_COUNT = 10;
	static const int MAX_INHABITANT_COUNT = 10000;
	int xCoordinate, yCoordinate;
	char* name;
	Vendor vendors[MAX_VENDOR_COUNT];
	//InteractableNPC specialNPCS[DEFAULT_INTERACTIBLE_NPC_COUNT];
	QuestNPC questNPCS[MAX_QUESTNPC_COUNT];
	Fateweaver fateweavers[MAX_FATEWEAVER_COUNT];
	NonInteractableNPC inhabitants[MAX_INHABITANT_COUNT];
	Map* map;

public:
	
	Settlement(char* _name);
	~Settlement();

};


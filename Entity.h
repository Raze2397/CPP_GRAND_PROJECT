#include "Topic.h"
class Entity 
{
private:
	int maxEnergy, currentEnergy;
protected:
	int maxHP, currentHP;
	bool conversable;
	bool initiateConversation(Entity entity);
	void askAbout(Topic topic);

public:
	Entity();
	~Entity();
};

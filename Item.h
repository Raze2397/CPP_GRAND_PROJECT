#pragma once
class Item
{
private:
	char* name;
public:
	Item();
	Item(Item& item);
	~Item();
	char* getName() const;
	void setName(char* _name);
};


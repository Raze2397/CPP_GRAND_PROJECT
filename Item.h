#pragma once
class Item
{
private:
	char* name;
public:
	Item(char* _name);
	Item(Item& item);
	Item& operator=(Item& item);
	~Item();
	char* getName() const;
	void setName(char* _name);
};


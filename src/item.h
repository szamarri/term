
#pragma once

#include<string>

class Item {
public:
	Item(int id, std::string name);
	int getId();
	std::string getName();

private:
	int id;
	std::string name;
};

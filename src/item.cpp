#include "item.h"

Item::Item(int id, std::string name) {
	this->id = id;
	this->name = name;
}

int Item::getId() {
	return this->id;
}

std::string Item::getName() {
	return this->name;
}

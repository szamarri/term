#include<iostream>
#include"item.h"

int main(int argc, char **argv)
{
	Item* item = new Item(1, "Saul");
	std::cout << "Hola mundo!!!" << std::endl;
	std::cout << "item " << item->getId() << " nombre " << item->getName() << std::endl;
	return 0;
}


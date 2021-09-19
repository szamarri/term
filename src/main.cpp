#include<iostream>
#include<vector>
#include<algorithm>
#include"item.h"

int main(int argc, char **argv)
{
	int integrantes;

	std::vector<Item *> list;
	std::cout << "numero de integrantes: ";
	std::cin >> integrantes;

	for (std::size_t i = 0; i < integrantes; i++)
	{
		std::string name;
		std::cout << "introduce el item " << i+1 << " ";
		std::cin >> name;

		Item* item = new Item(i+1, name);
		list.push_back(item);
	}
	
	std::cout << "\n> Los elementos de la lista son: " << std::endl;
	for (auto item : list)
	{
		std::cout << "id: " << item->getId();
		std::cout << " name: " << item->getName() << std::endl;
	}
	
	return 0;
}


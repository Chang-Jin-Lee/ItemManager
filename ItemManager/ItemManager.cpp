#include "ItemManager.h"
#include "Item.h"

ItemManager::ItemManager()
{

}

void ItemManager::Add(const int& _uid, const std::string& _name, const char& _grade)
{
	Item* newItem = new Item[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		newItem[i].uid = items[i].uid;
		newItem[i].name = items[i].name;
		newItem[i].grade = items[i].grade;
	}
	newItem[size].uid = _uid;
	newItem[size].name = _name;
	newItem[size].SetGrade(_grade);
	size++;
	delete[] items;
	items = newItem;
}

void ItemManager::Remove(int _uid)
{
	size_t bSearchedIndex = -1;
	for (size_t i = 0; i < size; i++)
	{
		if (items[i].uid == _uid)
		{
			bSearchedIndex = i;
			break;
		}
	}
	if (bSearchedIndex != -1)
	{
		size--;
		Item* newItem = new Item[size];
		for (size_t i = 0; i < size; i++)
		{
			int targetIndex = i;
			if (i >= bSearchedIndex)
			{
				targetIndex++;
			}
			newItem[i].uid = items[targetIndex].uid;
			newItem[i].name = items[targetIndex].name;
			newItem[i].grade = items[targetIndex].grade;
		}
		delete[] items;
		items = newItem;
	}
}

Item* ItemManager::Find(int _uid)
{
	for (size_t i = 0; i < size; i++)
	{
		if (items[i].uid == _uid)
		{
			return &items[i];
		}
	}
	return nullptr;
}

void ItemManager::Print()
{
	for (size_t i = 0; i < size; i++)
	{
		items[i].Show();
	}
}

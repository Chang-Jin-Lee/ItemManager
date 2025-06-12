#pragma once
#include <iostream>

/*
* @brief : �������� �����ϴ� �Ŵ����Դϴ�.
* @details : �߰�, ����, �˻�, ��� ����� �ֽ��ϴ�.
* @details : �߰�, ������ items�� ����� ���մϴ�.
*/

class Item;

class ItemManager
{
	Item* items;
	size_t size = 0;
public:
	ItemManager();
	void Add(const int& _uid, const std::string& _name, const char& _grade);
	void Remove(int _uid);
	Item* Find(int _uid);
	void Print();
};


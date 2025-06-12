#pragma once
#include <iostream>

/*
* @brief : 아이템을 관리하는 매니저입니다.
* @details : 추가, 삭제, 검색, 출력 기능이 있습니다.
* @details : 추가, 삭제시 items의 사이즈가 변합니다.
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


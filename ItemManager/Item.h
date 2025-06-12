#pragma once
#include <iostream>
#include "ItemManager.h"

/*
* @brief : 아이템의 데이터가 저장되는 클래스입니다.
* @details : ItemManager의 함수를 friend로 선언해 private 멤버 변수에 접근 가능하게 했습니다.
*/

class ItemManager;

enum class EGrade
{
	C,
	B,
	A,
	S,
	Max
};

class Item
{
	int uid;
	std::string name;
	EGrade grade;
public:
	Item() : uid{ -1 }, name{ "default" }, grade{ EGrade::Max } {}
	~Item() {}

	char GetGrade();
	void SetGrade(char _grade);
	void GradeUp();
	void Show();

public:
	friend void ItemManager::Add(const int& _uid, const std::string& _name, const char& _grade);
	friend Item* ItemManager::Find(int _uid);
	friend void ItemManager::Remove(int _uid);
};
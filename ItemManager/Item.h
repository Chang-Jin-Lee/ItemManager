#pragma once
#include <iostream>
#include "ItemManager.h"

/*
* @brief : �������� �����Ͱ� ����Ǵ� Ŭ�����Դϴ�.
* @details : ItemManager�� �Լ��� friend�� ������ private ��� ������ ���� �����ϰ� �߽��ϴ�.
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
#include "Item.h"

char Item::GetGrade()
{
	switch (grade)
	{
	case EGrade::A:
		return 'A';
	case EGrade::B:
		return 'B';
	case EGrade::C:
		return 'C';
	case EGrade::S:
		return 'S';
	default:
		return '0';
	}
}

void Item::SetGrade(char _grade)
{
	switch (_grade)
	{
	case 'A':
		grade = EGrade::A;
		break;
	case 'B':
		grade = EGrade::B;
		break;
	case 'C':
		grade = EGrade::C;
		break;
	case 'S':
		grade = EGrade::S;
		break;
	default:
		break;
	}
}

void Item::GradeUp()
{

	EGrade newGrade = static_cast<EGrade>(static_cast<int>(grade) + 1);
	if (newGrade == EGrade::Max)
	{
		std::cout << "제일 높은 등급입니다.\n";
		return;
	}
	grade = newGrade;

}

void Item::Show()
{
	std::cout << "uid : " << uid << ", name : " << name << ", grade : " << GetGrade() << '\n';
}

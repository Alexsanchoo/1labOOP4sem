#include "Developer.h"

void Developer::setType(SpecialistType type)
{
	this->type = type;
}

SpecialistType Developer::getType()
{
	return type;
}

string Developer::getStrType()
{
	switch (type)
	{
	case JUNIOR:
		return "Junior";
		break;
	case MIDDLE:
		return "Middle";
		break;
	case SENIOR:
		return "Senior";
		break;
	default:
		break;
	}
}

void Developer::setNameProj(string name)
{
	nameProject = name;
}

string Developer::getNameProj()
{
	return nameProject;
}

void Developer::setPriceProj(double price)
{
	priceProject = price;
}

double Developer::getPriceProj()
{
	return priceProject;
}

void Developer::set()
{
	Employee::set();
	cout << "�������� ��� ������������: " << endl;
	Employee::showSpecType();
	int ch = -1;
	while (ch < 1 || ch > 3)
	{
		cout << "�������� �����: "; ch = ValidInput<int>::getValidValue("������! �������� ����� ��� ���: ");
	}
	type = (SpecialistType) (ch - 1);
	cout << "������� �������� �������: "; nameProject = ValidInput<string>::getString("������! ������� �������� ������� ��� ���: ");
	cout << "������� ���� ������� (� $): "; priceProject = ValidInput<double>::getValidValue("������! ������� ���� ��� ���: ");
}

void Developer::get()
{
	Employee::get();
	cout << "��� ������������: " << getStrType() << endl;
	cout << "�������� �������: " << nameProject << endl;
	cout << "���� �������: " << priceProject << "$" << endl;
}

#include "QAEngineer.h"


void QAEngineer::setType(SpecialistType type)
{
	this->type = type;
}

SpecialistType QAEngineer::getType()
{
	return type;
}

string QAEngineer::getStrType()
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

void QAEngineer::setNameProj(string name)
{
	nameProject = name;
}

string QAEngineer::getNameProj()
{
	return nameProject;
}

void QAEngineer::setPriceProj(double price)
{
	priceProject = price;
}

double QAEngineer::getPriceProj()
{
	return priceProject;
}

void QAEngineer::set()
{
	Employee::set();
	cout << "�������� ��� ��������: " << endl;
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

void QAEngineer::get()
{
	Employee::get();
	cout << "��� ��������: " << getStrType() << endl;
	cout << "�������� �������: " << nameProject << endl;
	cout << "���� �������: " << priceProject << "$" << endl;
}

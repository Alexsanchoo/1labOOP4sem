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
	cout << "Выберите тип инженера: " << endl;
	Employee::showSpecType();
	int ch = -1;
	while (ch < 1 || ch > 3)
	{
		cout << "Сделайте выбор: "; ch = ValidInput<int>::getValidValue("Ошибка! Сделайте выбор ещё раз: ");
	}
	type = (SpecialistType) (ch - 1);
	cout << "Введите название проекта: "; nameProject = ValidInput<string>::getString("Ошибка! Введите название проекта ещё раз: ");
	cout << "Введите цену проекта (в $): "; priceProject = ValidInput<double>::getValidValue("Ошибка! Введите цену ещё раз: ");
}

void QAEngineer::get()
{
	Employee::get();
	cout << "Вид инженера: " << getStrType() << endl;
	cout << "Название проекта: " << nameProject << endl;
	cout << "Цена проекта: " << priceProject << "$" << endl;
}

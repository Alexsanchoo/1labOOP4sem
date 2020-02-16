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
	cout << "Выберите тип разработчика: " << endl;
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

void Developer::get()
{
	Employee::get();
	cout << "Вид разработчика: " << getStrType() << endl;
	cout << "Название проекта: " << nameProject << endl;
	cout << "Цена проекта: " << priceProject << "$" << endl;
}

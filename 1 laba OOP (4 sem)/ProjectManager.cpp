#include "ProjectManager.h"

void ProjectManager::setNameProj(string name)
{
	nameProject = name;
}

string ProjectManager::getNameProj()
{
	return nameProject;
}

void ProjectManager::setPriceProj(double price)
{
	priceProject = price;
}

double ProjectManager::getPriceProj()
{
	return priceProject;
}

void ProjectManager::set()
{
	Employee::set();
	cout << "Введите название проекта: "; nameProject = ValidInput<string>::getString("Ошибка! Введите название проекта ещё раз: ");
	cout << "Введите цену проекта (в $): "; priceProject = ValidInput<double>::getValidValue("Ошибка! Введите цену ещё раз: ");
}

void ProjectManager::get()
{
	Employee::get();
	cout << "Название проекта: " << nameProject << endl;
	cout << "Цена проекта: " << priceProject << "$" << endl;
}

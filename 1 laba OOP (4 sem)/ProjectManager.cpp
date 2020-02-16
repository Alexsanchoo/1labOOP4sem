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
	cout << "������� �������� �������: "; nameProject = ValidInput<string>::getString("������! ������� �������� ������� ��� ���: ");
	cout << "������� ���� ������� (� $): "; priceProject = ValidInput<double>::getValidValue("������! ������� ���� ��� ���: ");
}

void ProjectManager::get()
{
	Employee::get();
	cout << "�������� �������: " << nameProject << endl;
	cout << "���� �������: " << priceProject << "$" << endl;
}

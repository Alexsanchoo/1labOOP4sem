#include "Employee.h"

void Employee::setName(string name)
{
	this->name = name;
}

string Employee::getName()
{
	return name;
}

void Employee::setLastname(string lastname)
{
	this->lastname = lastname;
}

string Employee::getLastname()
{
	return lastname;
}

void Employee::setAge(int age)
{
	this->age = age;
}

int Employee::getAge()
{
	return age;
}

void Employee::setExp(int exp)
{
	experience = exp;
}

int Employee::getExp()
{
	return experience;
}

void Employee::set()
{
	cout << "������� ���: "; name = ValidInput<string>::getInitials("������! ������� ��� ��� ���: ");
	cout << "������� �������: "; lastname = ValidInput<string>::getInitials("������! ������� ������� ��� ���: ");
	cout << "������� �������: "; age = ValidInput<int>::getValidValue("������! ������� ������� ��� ���: ");
	cout << "������� ���� ������ (� �����): "; experience = ValidInput<int>::getValidValue("������! ������� ���� ��� ���: ");	
	salary.set();
}

void Employee::get()
{
	cout << "���: " << name << endl;
	cout << "�������: " << lastname << endl;
	cout << "�������: " << age << endl;
	cout << "���� ������ (� �����): " << experience << endl;
	salary.get();
}

void Employee::showSpecType()
{
	cout << "1. Junior;" << endl;
	cout << "2. Middle;" << endl;
	cout << "3. Senior." << endl;
}

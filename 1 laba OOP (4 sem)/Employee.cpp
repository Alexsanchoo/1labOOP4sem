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
	cout << "Введите имя: "; name = ValidInput<string>::getInitials("Ошибка! Введите имя ещё раз: ");
	cout << "Введите фамилию: "; lastname = ValidInput<string>::getInitials("Ошибка! Введите фамилию ещё раз: ");
	cout << "Введите возраст: "; age = ValidInput<int>::getValidValue("Ошибка! Введите возраст ещё раз: ");
	cout << "Введите стаж работы (в годах): "; experience = ValidInput<int>::getValidValue("Ошибка! Введите стаж ещё раз: ");	
	salary.set();
}

void Employee::get()
{
	cout << "Имя: " << name << endl;
	cout << "Фамилия: " << lastname << endl;
	cout << "Возраст: " << age << endl;
	cout << "Стаж работы (в годах): " << experience << endl;
	salary.get();
}

void Employee::showSpecType()
{
	cout << "1. Junior;" << endl;
	cout << "2. Middle;" << endl;
	cout << "3. Senior." << endl;
}

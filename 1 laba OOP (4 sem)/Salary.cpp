#include "Salary.h"

void Salary::setTax(double tax)
{
	this->tax = tax;
}

double Salary::getTax()
{
	return tax;
}

void Salary::setSalary(double salary)
{
	this->salary = salary;
}

double Salary::getSalary()
{
	return salary;
}

void Salary::setNumHours(double numHours)
{
	this->numHours = numHours;
}

double Salary::getNumHours()
{
	return numHours;
}

void Salary::setBonus(double bonus)
{
	this->bonus = bonus;
}

double Salary::getBonus()
{
	return bonus;
}

void Salary::set()
{
	cout << "Введите подоходный налог (в %): ";
	tax = -1;
	while (tax < 0.0 || tax > 100.0) {
		tax = ValidInput<double>::getValidValue("Ошибка! Введите налог ещё раз: ");
	}
	cout << "Введите реальную зарплату (в $): "; salary = ValidInput<double>::getValidValue("Ошибка! Введите зарплату ещё раз: ");
	cout << "Введите премиальные (% от цены проекта): "; 
	bonus = -1;
	while (bonus < 0.0 || bonus > 100.0) {
	bonus = ValidInput<double>::getValidValue("Ошибка! Введите премиальные ещё раз: ");
	}
	cout << "Введите количество отработанных часов в день: "; numHours = ValidInput<int>::getValidValue("Ошибка! Введите часы ещё раз: ");
}

void Salary::get()
{
	cout << "Подоходный налог: " << tax << "%" << endl;
	cout << "Реальная зарплата: " << salary << "$" << endl;
	cout << "Процент премиальных: " << bonus << "%" << endl;
	cout << "Количество отработанных часов в день: " << numHours << "ч." << endl;
}

Salary & Salary::operator=(const Salary & obj)
{
	tax = obj.tax;
	salary = obj.salary;
	bonus = obj.bonus;
	numHours = obj.numHours;
	return *this;
}

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
	cout << "������� ���������� ����� (� %): ";
	tax = -1;
	while (tax < 0.0 || tax > 100.0) {
		tax = ValidInput<double>::getValidValue("������! ������� ����� ��� ���: ");
	}
	cout << "������� �������� �������� (� $): "; salary = ValidInput<double>::getValidValue("������! ������� �������� ��� ���: ");
	cout << "������� ����������� (% �� ���� �������): "; 
	bonus = -1;
	while (bonus < 0.0 || bonus > 100.0) {
	bonus = ValidInput<double>::getValidValue("������! ������� ����������� ��� ���: ");
	}
	cout << "������� ���������� ������������ ����� � ����: "; numHours = ValidInput<int>::getValidValue("������! ������� ���� ��� ���: ");
}

void Salary::get()
{
	cout << "���������� �����: " << tax << "%" << endl;
	cout << "�������� ��������: " << salary << "$" << endl;
	cout << "������� �����������: " << bonus << "%" << endl;
	cout << "���������� ������������ ����� � ����: " << numHours << "�." << endl;
}

Salary & Salary::operator=(const Salary & obj)
{
	tax = obj.tax;
	salary = obj.salary;
	bonus = obj.bonus;
	numHours = obj.numHours;
	return *this;
}

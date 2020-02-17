#pragma once
#include<iostream>
#include<string>
#include "ValidInput.h"

using namespace std;

class Salary
{
public:
	Salary() : tax(-1), salary(-1), numHours(-1), bonus(-1) {}
	Salary(double shTax, double shSalary, double shBonus, int shNumHours) : tax(shTax), salary(shSalary), bonus(shBonus),
		numHours(shNumHours) {}
	Salary(const Salary &obj) { tax = obj.tax; salary = obj.salary; numHours = obj.numHours; bonus = obj.bonus; }
	void setTax(double tax);
	double getTax();
	void setSalary(double salary);
	double getSalary();
	void setNumHours(double numHours);
	double getNumHours();
	void setBonus(double bonus);
	double getBonus();
	void set();
	void get();
	Salary& operator=(const Salary &obj);
	double calculateSalary(double price = 0.0);

private:
	double tax;
	double salary;
	double bonus;
	int numHours;
};


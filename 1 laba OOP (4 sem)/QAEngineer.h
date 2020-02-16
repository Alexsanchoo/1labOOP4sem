#pragma once
#include "Employee.h"
class QAEngineer :
	public Employee
{
public:
	QAEngineer() : Employee(), type(JUNIOR), nameProject(""), priceProject(0.0) {}
	QAEngineer(string shName, string shLastname, int shAge, int shExp, SpecialistType shType, string name, double price) :
		Employee(shName, shLastname, shAge, shExp), type(shType), nameProject(name), priceProject(price) {}
	QAEngineer(const QAEngineer &obj) : Employee(obj) { type = obj.type; nameProject = obj.nameProject; priceProject = obj.priceProject; }
	void setType(SpecialistType type);
	SpecialistType getType();
	string getStrType();
	void setNameProj(string name);
	string getNameProj();
	void setPriceProj(double price);
	double getPriceProj();
	void set();
	void get();

private:
	SpecialistType type;
	string nameProject;
	double priceProject;
};


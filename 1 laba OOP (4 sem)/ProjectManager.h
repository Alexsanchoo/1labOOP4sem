#pragma once
#include "Employee.h"
class ProjectManager :
	public Employee
{
public:
	ProjectManager() : Employee(), nameProject(""), priceProject(0.0) {}
	ProjectManager(string shName, string shLastname, int shAge, int shExp, string name, double price) :
		Employee(shName, shLastname, shAge, shExp), nameProject(""), priceProject(0.0) {}
	ProjectManager(const ProjectManager &obj) : Employee(obj) { nameProject = obj.nameProject; priceProject = obj.priceProject; }
	void setNameProj(string name);
	string getNameProj();
	void setPriceProj(double price);
	double getPriceProj();
	void set();
	void get();

private:
	string nameProject;
	double priceProject;
};


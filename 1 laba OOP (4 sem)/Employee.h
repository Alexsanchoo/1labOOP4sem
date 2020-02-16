#pragma once
#include<iostream>
#include<string>
#include "Salary.h"
#include "ValidInput.h"

using namespace std;

class Employee
{
public:
	Employee() : name(""), lastname(""), age(0), experience(0), salary(Salary()) {}
	Employee(string shName, string shLastname, int shAge, int shExp) : name(shName), lastname(shLastname), age(shAge), experience(shExp),
	salary(Salary()) {}
	Employee(const Employee &obj) { name = obj.name; lastname = obj.lastname; age = obj.age; experience = obj.experience; salary = obj.salary; }
	void setName(string name);
	string getName();
	void setLastname(string lastname);
	string getLastname();
	void setAge(int age);
	int getAge();
	void setExp(int exp);
	int getExp();
	void set();
	void get();
	Salary salary;
	void showSpecType();

protected:
	string name;
	string lastname;
	int age;
	int experience;
};


enum SpecialistType
{
	JUNIOR,
	MIDDLE,
	SENIOR
};



#pragma once
#include "Human.h"

class Student : public Human
{
private:
	int groop;
	std::string faculty;
public:
	Student(std::string name, std::string surname, int age, double height, double weight, int groop, std::string faculty) : Human ( name, surname,  age,  height,  weight) {
		this->groop = groop;
		this->faculty = faculty;
	}

	void setGroop(int groop);
	void setFaculty(std::string faculty);

};


#pragma once
#include "Brain.h"
#include <iostream>


class Human
{
private:
	int age;
	double height;
	double weight;
	std::string name;
	std::string surname;
public:
	Brain brain;
	Human() {
		age = 0;
		height = 0;
		weight = 0;
		name = " ";
		surname = " ";
		brain = Brain();
	}
	Human(std::string name, std::string surname, int age, double height, double weight) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->height = height;
		this->weight = weight;
		brain = Brain(90, 110);
	}
	void display();
	Human operator +(const Human& other);
	Human& operator ++();//префиксный инкримент 
	Human& operator ++(int val); //постфиксный 
	friend void ageing(Human& age);
	void setAge(int age);
	void setHeight(double height);
	void setWeight(double weight);

};


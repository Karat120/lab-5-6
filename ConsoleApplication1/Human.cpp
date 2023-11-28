#include "Human.h"

void Human::display()
{
	std::cout << "Имя:\t" << this->name<<std::endl;
	std::cout << "Фамилия:\t" << this->surname << std::endl;
	std::cout << "Возраст:\t" << this->age << std::endl;
	std::cout << "Рост:\t" << this->height << std::endl;
	std::cout << "Вес:\t" << this->weight << std::endl;
}

Human Human::operator+(const Human& other)
{
	Human human;
	human.age = this->age + other.age;
	human.weight = this->weight + other.weight;
	human.height = this->height + other.height;
	human.name = this->name;
	human.surname = this->surname;
	return human;
}

Human& Human::operator++()
{
	this->age += 1;
	this->height += 1;
	this->weight += 1;
	return *this;
}

Human& Human::operator++(int val)
{
	Human human(*this);//запомнить текущее состояние 
	this->age += 1;
	this->height += 1;
	this->weight += 1;
	return human;
}

void Human::setAge(int age)
{
	std::cout << "Ведите возраст" << std::endl;
	this->age = age;
}

void Human::setHeight(double height)
{

	std::cout << "Ведите рост" << std::endl;
	this->height = height;
}

void Human::setWeight(double weight)
{
	std::cout << "Ведите вес" << std::endl;
	this->weight = weight;
}


#include "Human.h"
#include <fstream>

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
	
	this->age = age;
}

void Human::setHeight(double height)
{

	
	this->height = height;
}

void Human::setWeight(double weight)
{
	
	this->weight = weight;
}

void Human::remember_word()
{
	std::string remember_string;
	std::cout << "Что вы хотите запомнить?\n Напишите слово:  ";
	std::cin >> remember_string;

	std::ofstream remembe;
	remembe.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	
	try
	{
		remembe.open("memory.txt", std::ofstream::app);
		remembe <<"\t"<< remember_string;
		remembe.close();

	}
	catch (const std::exception& exception)
	{
		std::cout << exception.what() << std::endl;
		std::cout << "Ошибка открытия файла" << std::endl;
	}
	

}

void Human::recall_word()
{
	std::string recall_word;
	std::ifstream recall;
	recall.exceptions(std::ifstream::badbit | std::ifstream::failbit);
	try
	{
		recall.open("memory.txt");
		std::getline(recall, recall_word);
		std::cout << recall_word << "\t" << std::endl;
				
		

		recall.close();

	}
	catch (const std::ifstream::failure & exception)
	{
		std::cout << exception.what() << std::endl;
		std::cout << "Ошибка открытия файла" << std::endl;
	}
	
}

void Human::examination()
{
	try
	{
		brain.get_iq();
	}
	catch (const int iq)
	{
		std::cout << "у человека iq меньше 60 вызвано исключение";
	}
}


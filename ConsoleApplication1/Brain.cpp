#include "Brain.h"
#include <iostream>
int Brain::Chromosome = 46;

void Brain::display()
{
	std::cout << "IQ=  " << this->iq<<std::endl;
	std::cout << "Size= " << this->size << std::endl;
	std::cout << "Chromosome= " << Chromosome << std::endl;
}

void Brain::get_iq()
{
	if (this->iq < 60) {
		throw iq;
	}
	else std::cout << "IQ= " << this->iq << std::endl;
}

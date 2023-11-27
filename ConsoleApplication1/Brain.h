#pragma once
class Brain
{
private:
	int iq;
	int size;
	static int Chromosome;
public:
	
	Brain() {
		this->iq = 0;
		this->size = 0;
		
	}
	Brain(int iq, int size) {
		this->iq = iq;
		this->size = size;
	}
	static int GetChromosome() {
		return Chromosome;
	}
	static void SetChromosome(int value) {
		Chromosome = value;
	}
	void display();
};


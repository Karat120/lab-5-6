#include <iostream>
#include "Human.h"
#include <Windows.h>
#include "Student.h"
void ageing(Human &age) {
    age.age += 10;
}

int main()
{
    setlocale(LC_ALL, "rus");
   // Human one("Adam", "Adamovich", 43, 180, 75);
    //перегрузка операторов 
  /*  one.display();
    one++;
    one.display();
    Human two("Eva", "Adamovna", 20, 160, 53);
    two.display();
   one= one + two;*/
    /*one.display();
    ageing(one);
    one.display();*/

    //статик тест
   /* Brain a(24,56);
    std::cout << "Мозг А" << std::endl;
    a.display();
    Brain b(90, 123);
    std::cout << "Мозг Б" << std::endl;
    b.display();
    system("pause");
    std::cout << "Изменил статическое поле хромосомы\n";
    a.SetChromosome(23);
    system("cls");
    std::cout << "Мозг А" << std::endl;
    a.display();
    std::cout << "Мозг Б" << std::endl;
    b.display();*/

    Student ac("Adam", "Adamovich", 43, 180, 75,23,"FIT");
    ac.display();
}


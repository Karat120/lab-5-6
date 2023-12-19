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
    Human one("Adam", "Adamovich", 43, 180, 75);
    //one.remember_word();
    //one.recall_word();
    Human two;
    two.examination();
}


#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> number; // on cree un tableau de int de type array (classe)
    Array<int> numbers(MAX_VAL); // on cree un tableau de int de type array (classe)
    int* mirror = new int[MAX_VAL]; // On cree un tableau miroir de type int
    srand(time(NULL)); // pour obtenir des chiffres aleatoires
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << mirror[5] << std::endl;
    std::cout << numbers[5] << std::endl;
    try
    {
        numbers[-2] = 0; // on teste avec un index négatif. Ca ne va pas marcger car le tableau va de 0 a 749.
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0; //on teste avec un index de 750. Ca ne va pas marcger car le tableau va de 0 a 749.
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

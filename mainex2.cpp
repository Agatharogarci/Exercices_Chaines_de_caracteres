//
// Created by Agatha on 01.10.2026.
//
#include <iostream>
#include <string>
#include <print>

int main()
{
    int pv = 100;
    int pv_max = 100;


    int cases_remplies = (pv * 10) / pv_max;
    int cases_max = 10;

    std::string barre = "[";

    for (int i = 1; i <= cases_max; i++)
    {
        if (i <= cases_remplies)
        {
            barre += "#";
        }
        else
        {
            barre += "-";
        }

    }
    std::println("Barre de vie");
    std::println("Pv actuels: {}", pv);
    barre += "] " + std::to_string(pv) + "/" + std::to_string(pv_max);
    std::print("{}", barre);

    


return 0;
}
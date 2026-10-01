//
// Created by Agatha on 01.10.2026.
//

#include <iostream>
#include <string>
#include <print>
int main()
{
    std::string pseudo;
    std::getline(std::cin, pseudo);
    do {
        if (pseudo.empty())
        {
            std::println("Refuse: le pseudo ne peux pas etre vide...");
            break;
        }
        if (pseudo.size() <= 2)
        {
            std::println("Refuse: le pseudo doit avoir au moins 3 caracteres...");
            break;
        }
        if (pseudo.size() >= 16)
        {
            std::println("Refuse: le pseudo ne peut pas avoir autant de caracteres...");
            break;
        }
        if (pseudo.find(' ') != std::string::npos) {
            std::println("Refuse: le pseudo ne peut pas avoir d'espaces...");
            break;
        }

        std::println("Bienvenue {}!", pseudo);
        break;
    }while (true);

return 0;
}

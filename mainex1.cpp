//
// Created by Agatha on 01.10.2026.
//

#include <iostream>
#include <string>
#include <print>
int main()
{
                std::println("Choisi un prenom et une classe pour ton heros![Magicien/Chevalier/Paladin/Soigneur]");
                std::string prenom;
                std::cin >> prenom;
                std::string ligne;

                std::getline(std::cin, ligne);



                std::println("Banniere");
                std::println("Nom du heros: {}", prenom);
                std::println("Classe: {}", ligne);


                std::string longeur(ligne.size(), '-');
                std::string longeur2(prenom.size(), '-');
                std::println("+{}{}+",longeur,longeur2);
                std::println("|{} {}|", prenom, ligne);
                std::println("+{}{}+",longeur, longeur2);








}

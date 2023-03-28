#include <iostream>
#include <string>
#include "Lieux.h"

int main()
{
    Lieux* lieux[3];
    lieux[0] = new Lieux("Bahut",12,"Un endroit rude mais charmant...");
    lieux[1] = new Lieux("Chambre",1, "Vous aimez bien dormir non?");
    lieux[2] = new Lieux("KFC",5, "Dites adieu a votre argent...");
    Lieux* position_courante = lieux[1];

    int endurance(100);
    std::string choix("");
    int choix_camps(0);
    int choix_repos(0);

    while(endurance > 0){
        std::cout << "----------------------------------------------------------" << std::endl;
        if (endurance > 100) {
            endurance = 100;
        };
        std::cout << "ENDURANCE: " << endurance << std::endl;
        std::cout << std::endl;

        std::cout << "Vous etes dans le/la " << position_courante->get_name() << std::endl;
        std::cout << std::endl;

        if (position_courante->get_diff() >= 10) {
            if (position_courante->camps == 0) {
                std::cout << "Voulez vous etablir un campement?" << std::endl;
                std::cout << std::endl;
                std::cout << "1: OUI / 2: NON" << std::endl;
                std::cin >> choix_camps;
                if (choix_camps == 1) {
                    position_courante->camps += 1;
                    std::cout << "Vous avez installe un camps dans le/la " << position_courante->get_name() << std::endl;
                    std::cout << std::endl;
                };
                if (choix_camps != 1) {
                    std::cout << "Dommage..." << std::endl;
                    std::cout << std::endl;
                };
            };
        };
            
        std::cout << "Ou voulez vous aller?" << std::endl;
        std::cout << std::endl;

        std::cout << "Bahut" << std::endl;
        std::cout << "Chambre" << std::endl;
        std::cout << "KFC" << std::endl;
        std::cout << std::endl;

        std::cout << "(N'oubliez pas les majuscules !)" << std::endl;
        std::cout << std::endl;

        std::cin >> choix;
        std::cout << std::endl;
        if (choix == position_courante->get_name()) {
            std::cout << "Vous y etes deja !" << std::endl;
            std::cout << std::endl;
        }
        else {
            if (choix == lieux[0]->get_name() && choix != position_courante->get_name()) {
                std::cout << lieux[0]->get_desc() << std::endl;

                position_courante = lieux[0];
                if (position_courante->camps == 0) {
                    endurance = endurance - position_courante->get_diff();
                };
                if (position_courante->camps == 1) {
                    endurance = endurance - (position_courante->get_diff() / 2);
                    std::cout << "Vous avez intalle un campement" << std::endl;
                    std::cout << std::endl;
                    std::cout << "Voulez vous vous reposer?" << std::endl;
                    std::cout << std::endl;
                    std::cout << "1: OUI / 2: NON" << std::endl;
                    std::cin >> choix_repos;
                    std::cout << std::endl;
                    if (choix_repos == 1) {
                        std::cout << "Vous vous reposez..." << std::endl;
                        std::cout << std::endl;
                        endurance += 50;
                    };
                    if (choix_repos != 1) {
                        std::cout << "Dommage..." << std::endl;
                        std::cout << std::endl;
                    };
                };
                std::cout << std::endl;
            };

            if (choix == lieux[1]->get_name() && choix != position_courante->get_name()) {
                std::cout << lieux[1]->get_desc() << std::endl;

                position_courante = lieux[1];
                if (position_courante->camps == 0) {
                    endurance = endurance - position_courante->get_diff();
                };
                if (position_courante->camps == 1) {
                    endurance = endurance - (position_courante->get_diff() / 2);
                    std::cout << "Vous avez intalle un campement ici" << std::endl;
                    std::cout << std::endl;
                    std::cout << "1: OUI / 2: NON" << std::endl;
                    std::cout << std::endl;
                    std::cout << "Voulez vous vous reposer?" << std::endl;
                    std::cin >> choix_repos;
                    std::cout << std::endl;
                    if (choix_repos == 1) {
                        std::cout << "Vous vous reposez..." << std::endl;
                        std::cout << std::endl;
                        endurance += 50;
                    };
                    if (choix_repos != 1) {
                        std::cout << "Dommage..." << std::endl;
                        std::cout << std::endl;
                    };
                };

                std::cout << std::endl;
            };

            if (choix == lieux[2]->get_name() && choix != position_courante->get_name()) {
                std::cout << lieux[2]->get_desc() << std::endl;

                position_courante = lieux[2];
                if (position_courante->camps == 0) {
                    endurance = endurance - position_courante->get_diff();
                };
                if (position_courante->camps == 1) {
                    endurance = endurance - (position_courante->get_diff() / 2);
                    std::cout << "Vous avez intalle un campement" << std::endl;
                    std::cout << std::endl;
                    std::cout << "1: OUI / 2: NON" << std::endl;
                    std::cout << std::endl;
                    std::cout << "Voulez vous vous reposer?" << std::endl;
                    std::cin >> choix_repos;
                    std::cout << std::endl;
                    if (choix_repos == 1) {
                        std::cout << "Vous vous reposez..." << std::endl;
                        std::cout << std::endl;
                        endurance += 50;
                    };
                    if (choix_repos != 1) {
                        std::cout << "Dommage..." << std::endl;
                        std::cout << std::endl;
                    };
                };

                std::cout << std::endl;
            };

            if (choix != lieux[0]->get_name() && choix != lieux[1]->get_name() && choix != lieux[2]->get_name()) {
                std::cout << "Vous ne pouvez pas aller ici !" << std::endl;
                std::cout << std::endl;
            };
        }
        };
    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage


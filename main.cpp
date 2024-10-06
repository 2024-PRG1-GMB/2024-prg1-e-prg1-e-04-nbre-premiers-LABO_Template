/**
 * @file        main.cpp
 * @author      Marc Ischi
 * @brief       Programme qui permet de trouver les nombres premiers
 *              entre 2 bornes
 * 
 * @version     0.1
 * @date        2024-10-04
 * 
 * @copyright   Copyright (c) 2024
 * 
 */

#include <iostream>
#include <cstdlib>
#include <vector>
#include "stdint.h"

using namespace std;

int main () {

    // Déclaration des variables
    const unsigned int borne_inferieur = 2;
    const unsigned int borne_superieur = 1e3;
    unsigned int user_value            = 1;

    char user_restart            = 'O';

    cout << "Ce programme ..." << endl << endl;

    do {

        // Demmande d'une borne supérieur de recherche
        // & control des valeurs entrée
        do {
            cout << "entrer une valeur [" << borne_inferieur << " ; " 
                << borne_superieur << "] : ";
                
            cin >> user_value;
        } while (user_value > borne_superieur or user_value < borne_inferieur);

        cout << "Voici la liste des nombres premiers" << endl;

        int count = 0; // variable pour le formatage de la sortie

        for (unsigned int candidat_premier = 2; candidat_premier <= user_value ; ++candidat_premier) {
            bool est_nombre_premier = true;
            for (unsigned int diviseur = 2; diviseur <= candidat_premier / 2 ; ++diviseur){

                if (candidat_premier % diviseur == 0) {
                    est_nombre_premier = false;
                    break;
                }
            }

            if (est_nombre_premier) {
                cout << '\t' << candidat_premier << " ";
                ++count;

                if (count % 5 == 0) {
                    cout << endl;
                }
            }

        }

        if (count % 5 != 0)
            cout << endl;

        // Demmande de relancer le program
        // & control du caractère entré
        do {
            cout << "Voulez-vous recommencer [O/N] : ";
            cin >> user_restart;
        }while (user_restart != 'N' and user_restart != 'O');

    } while (user_restart == 'O');

    cout << endl << "Fin de programme";   

}
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
    unsigned int borne_inferieur = 1;
    unsigned int borne_superieur = 1e3;
    unsigned int user_value      = 1;

    char user_restart            = 'O';

    do {

        // Demmande d'une borne supérieur de recherche
        // & control des valeurs entrée
        do {
            cout << "entrer une valeur [" << borne_inferieur << " ; " 
                << borne_superieur << "] : ";
                
            cin >> user_value;
        } while (user_value > 1000);

        vector<int> vecteur_nombre_premier;

        for (int i = 2; i <= user_value ; ++i) {

        }

        // Demmande de relancer le program
        // & control du caractère entré
        do {
            cout << "Voulez-vous recommencer [O/N] : ";
            cin >> user_restart;
        }while (user_restart != 'N' and user_restart != 'O');

    } while (user_restart == 'O');
    

}
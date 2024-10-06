/*
* \file main.cpp
* \version 1.0.0
* \author Cedrick Feze
* \date : 06.10.2024
* \brief : Lister les nombres premiers entre 2 et et la valeur entrée par l'utilisateur
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    cout << "Entrer une valeur [2-1000] : ";
    unsigned int limite;
    cin >> limite;

    while (limite < 2 || limite > 1000) {
        cout << "Entrer une valeur [2-1000] : " << endl;
        cin >> limite;
    }

    cout << "Voici la liste des nombres premiers" << endl;
    for (int i = 2; i <= limite; i++) {

        // 2 est premier
        if (i == 2) {
            cout << '\t' << i << "  " << '\t';
        }

        // Vérifie si le nombre est pair
        if (i % 2 == 0) {
            continue; // Les nombres pairs ne sont pas premiers (sauf 2)
        }

        bool est_premier = true; // Utilisé seulement pour le contrôle de la boucle
        for (int j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                est_premier = false; // Trouvé un diviseur
            }
        }

        // Afficher le nombre s'il est premier
        if (est_premier) {
            cout << '\t' << i << "  " << '\t';
        }
    }
    cout << endl;

    cout << " Voulez-vous recommencer [O/N] : ";
    char reponse;
    cin >> reponse;
    if (reponse == 'N') {
        cout << "Fin du programme" << endl;
    }else if (reponse != 'O') {
        cout << "Entrer une valeur [2-1000] : " << endl;
        cin >> limite;
    }

    return EXIT_SUCCESS;
}




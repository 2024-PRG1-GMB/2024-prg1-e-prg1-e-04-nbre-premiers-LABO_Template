//
// Created by Martin on 06/10/2024.
//
#include <iostream>
using namespace std;

int main() {

    int limite;
    int compteur_colonnes;
    char choix;

    cout << "Ce programme..." << endl;

    cout << "entrer une valeur [2-1000] :";
    cin >> limite;

    while(limite <=2 || limite >=1000 ){
        cout << "entrer une valeur [2-1000] :";
        cin >> limite;
    }
    for (int nbr = 2; nbr <= limite; nbr++) {
        bool nbr_premier = true;

        for (int i = 2; i * i <= nbr; i++) {
            if (nbr % i == 0) {
                nbr_premier = false;
                break;
            }
        }

        if (nbr_premier) {
            cout << '\t' << nbr << " ";
            compteur_colonnes++;

            if (compteur_colonnes == 5) {
                cout << endl;
                compteur_colonnes = 0;
            }
        }
    }
    cout << endl;

    while(choix != 'O' || choix != 'N'){
        if(choix == 'O'){
            return main();
        }else if(choix == 'N'){
            break;
        }else{
            cout << "Voulez-vous recommencer [O/N] : "<< endl;
            cin >> choix;
        }
    };

    cout << "fin du programme" << endl;

    return EXIT_SUCCESS;
}
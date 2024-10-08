//
// Created by Martin on 06/10/2024.
//
#include <iostream>
using namespace std;

int main() {

    int limite, nbr, cpt, i;
    char choix;

    cout << "Ce programme..." << endl;

    cout << "entrer une valeur [2-1000] :";
    cin >> limite;

    while(limite <=2 || limite >=1000 ){
        cout << "entrer une valeur [2-1000] :";
        cin >> limite;
    }
    do {
        cpt = 0;
        nbr = limite;

        for (i = 1; i <= nbr; i++) {
            if (nbr % i == 0) {
                cpt++;
            }
        }

        if (cpt == 2) {
            cout << '\t' << nbr << " ";
        }

    } while(nbr <= limite);

    cout << "Voulez-vous recommencer [O/N] : "<< endl;
    cin >> choix;
    do {
        if(choix == 'O'){
            return main();
        }else if(choix == 'N'){
            cout << "fin du programme" << endl;
        }else{
            cout << "Voulez-vous recommencer [O/N] : "<< endl;
            cin >> choix;
        }
    }while(choix != 'O' || choix != 'N');

    cout << "fin du programme" << endl;

    return EXIT_SUCCESS;
}
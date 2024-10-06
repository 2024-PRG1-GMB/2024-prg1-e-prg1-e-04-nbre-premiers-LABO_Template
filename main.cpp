//
// Created by Martin on 06/10/2024.
//
#include <iostream>
using namespace std;

int main() {

    int valeur;
    char recommencer;


    cout << "Ce programme affiche tous les nombres premiers compris entre 1 et la valeur que vous voulez" << endl;


    do {
        cout << "entrer une valeur [2-1000] :" ;
        cin >> valeur;
    }while (valeur >=2 && valeur <=1000);

    if(valeur <=2 || valeur >=1000) {
        cout << "votre valeur n'est pas comprise entre 2 et 1000 " << endl;
    }

    //calculer et afficher un tableau qui contient les nombres premiers


    cout << "Voulez-vous recommencer [O/N] : "<< endl;
    cin >> recommencer;
    if(recommencer == 'O'){
        return main();
    }else if(recommencer == 'N'){
        cout << "fin du programme" << endl;
    }else{
        cout << "Voulez-vous recommencer [O/N] : "<< endl;
        cin >> recommencer;
    }

    cout << "fin du programme" << endl;

    return EXIT_SUCCESS;
}
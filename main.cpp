/**
* \version 1.0.0
* \author Enis S.
* \date : 08.10.2024
* \brief : Afficheur de nombres premiers
*/

#include <iostream>


using namespace std;

int main() {
    cout << "___ Afficher nombres premiers V.1 ___" << endl << endl;


    // on créer un type booléen et une référence sur le pointeur (portée variable)
    bool recommencer  = true;
    bool* pointer_recommencer = &recommencer;



    // création boucle principale du programme
    do {

        int interval_bas_utilisateur, interval_haut_utilisateur;
        const int interval_bas = 2,  interval_haut= 1000;

        // gestion flux entrant [saisie au clavier] (intervalle bas)
        do {
            cout << "entrer une valeur [2-1000]:";
            cin >> interval_bas_utilisateur;
        }while(interval_bas_utilisateur < interval_bas);

        // gestion flux entrant [saisie au clavier] (intervalle haut)
        do {
            cout << "entrer une valeur [2-1000]:";
            cin >> interval_haut_utilisateur;
            cout << endl;
        }while(interval_haut_utilisateur > interval_haut);



        int nbre_a_tester;
        int test_diviseur;
        int largeur_tableau_actuel;

        bool nbre_premier;

        const int LARGEUR_TABLEAU_MAX = 5;

        // calcul nombre premier et affichage
        for(int i = interval_bas_utilisateur; i < interval_haut_utilisateur; i++) {

            nbre_a_tester = i;


            // variable qui gère la largeur de la ligne en cours
            largeur_tableau_actuel = 0;

            // la boucle do...while sert à gérer l'affichage du tableau
            // avec le test du nombre paire inclu
            do{

                nbre_premier = false;

                // Afin d'alléger un peu le temps de traitement nous excluons tout les multiples de 2 et vérifions
                // par la même occasion le cas ou nbre_a_tester serait égale a 2 (qui est un nombre premier)
                if((nbre_a_tester % 2) == 0) {
                        if(nbre_a_tester == 2) {
                            nbre_premier = true;
                        }
                        else {
                            nbre_premier = false;
                        }
                }

                // Afin d'alléger un peu le temps de traitement nous excluons tout les multiples de 3 et vérifions
                // par la même occasion le cas ou nbre_a_tester serait égale a 3 (qui est un nombre premier)
                else if(nbre_a_tester % 3 == 0) {
                    if(nbre_a_tester == 3) {
                        nbre_premier = true;
                    }
                    else {
                        nbre_premier = false;
                    }
                }

                // condition qui va tester si le nbre_a_tester est premier
                else {

                    //Nous avons déjà exclu les diviseurs 2 et 3 - on peut commencer à partir de 4
                    test_diviseur = 4;


                    // la boucle conditionnelle s'arrête si elle trouve un diviseur autre que le nombre lui-même puis elle assigne la valeur de verité fausse
                    // dans le cas contraire nbre_premier est vrai
                    while(test_diviseur < nbre_a_tester) {
                        if(nbre_a_tester % test_diviseur == 0) {
                            nbre_premier = false;
                            break;
                        }
                        else {
                            nbre_premier = true;
                        }
                        ++test_diviseur;
                    }
                }



                // si on atteint l'intervalle haut, on quitte
                if (nbre_a_tester >= interval_haut_utilisateur) {
                    break;
                }

                // afficher le nombre premier
                if (nbre_premier) {
                    cout << '\t' << nbre_a_tester << " ";
                    ++largeur_tableau_actuel;
                }

                ++nbre_a_tester;


                if(largeur_tableau_actuel == LARGEUR_TABLEAU_MAX) {
                    cout << endl;
                }
            }while(largeur_tableau_actuel != LARGEUR_TABLEAU_MAX);

            i = nbre_a_tester;


        }
        cout << endl << endl;

        // création boucle conditionnelle pour la gestion des excpetions du menu <recommencer>
        char choix_utilisateur;
        do {
            cout << "Voulez-vous recommencer [O/N]" << endl;
            cin >> choix_utilisateur;
            if (choix_utilisateur == 'O') {
                recommencer = true;
                cout << endl << endl;

            }
            else if (choix_utilisateur == 'N') {
                *pointer_recommencer = false;
            }
        }while(not(choix_utilisateur == 'N' || choix_utilisateur == 'O'));

    }while (*pointer_recommencer);

    return EXIT_SUCCESS;
}
/*  AUTHEUR :  GABRIEL BADER
 *  DATE : 08.10.2024
 *  NOM : PRG1_NBRE_PREMIER
 *  VERSION : V1
 *  DESCRIPTION : Ce programme va calculer les nombres premiers à partir d'une entrée utilisateur.
 */

#include <iostream>

using namespace std;

int main() {

    string reponse_utilisateur;
    const int limite_basse = 2;
    const int limite_haute = 1000;
    int saisie_limite_utilisateur;

    
    do {
        cout << "Veuillez entrez une valeure limite entre 2 et 1000 : " << endl;
        cin >> saisie_limite_utilisateur;

        while (saisie_limite_utilisateur < limite_basse || saisie_limite_utilisateur > limite_haute) {
            cout << "Veuillez entrez une valeure limite entre 2 et 1000 : " << endl;
            cin >> saisie_limite_utilisateur;
        }

        int compteur_affichage = 0; //compteur pour gerer l'affichage pour 5 valeur par ligne

        for (int nombre = limite_basse; nombre <= saisie_limite_utilisateur; nombre++) {

            for (int diviseur = limite_basse; diviseur >= nombre || (nombre % diviseur) != 0 ; diviseur++ ) {

                if (nombre == diviseur) {

                    cout << " | ";
                    cout << nombre << " | ";
                    compteur_affichage++;

                    if (compteur_affichage > 4) {
                        cout << endl;
                        compteur_affichage = 0;
                    }

                    break;

                }
            }
        }
        cout << endl << "Voulez vous recommencer O/N?" << endl;
        cin >> reponse_utilisateur;
    } while (reponse_utilisateur != "N");

    return EXIT_SUCCESS;
}

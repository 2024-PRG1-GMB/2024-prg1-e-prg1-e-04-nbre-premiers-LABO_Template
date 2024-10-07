/**
*  \file    :nbr_premiers.cpp
 * \version :1.0.0
 * \author  :Samuel Dos Santos
 * \date    :04.10.2024
 * \brief   :Displays all the prime numbers until a specified limit
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    constexpr int max_elements_in_line = 5;
    constexpr int upper_limit = 1000;
    constexpr int lower_limit = 2;

    cout << "Ce programme..." << endl << endl;

    char restart;
    do {
        // User entry
        int limit;
        do {
            cout << "Entrer une valeur [" << lower_limit << "-" << upper_limit << "] : ";
            cin >> limit;
        }while(limit < lower_limit || limit > upper_limit);


        // Calculate prime numbers
        cout << endl << "Voici la liste des nombres premiers : " << endl;

        int elements_in_line = 0;
        for(int i = lower_limit; i <= limit; ++i) {

            int div_cpt = 2;    // Counts how many times the number is divided
            for (int j = 2; j < i; ++j) {
                if (i % j == 0)
                    ++div_cpt;
            }

            // Display the prime numbers (only divided by 1 and itself)
            if(div_cpt == 2) {
                cout << "\t" << i << "\t";
                ++elements_in_line;

                // If there is "max_elements_in_line" go to the next line.
                if(elements_in_line == max_elements_in_line) {
                    cout << endl;
                    elements_in_line = 0;
                }
            }
        }

        cout << endl << endl;

        do {
            cout << "Voulez-vous recommencer [O/N] : ";
            cin >> restart;

        } while(restart != 'O' && restart != 'N');

    } while(restart == 'O');

    return EXIT_SUCCESS;
}

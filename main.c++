#include <iostream>
#ifndef EXO_1
#ifndef EXO_2
#ifndef EXO_3
#ifndef EXO_4
#ifndef EXO_5
#endif
#endif
#endif
#endif
#endif

// Exercice 1 : Affichage d'un message
#ifdef EXO_1
int main() {
    std::cout << "Hello, World!\nBienvenue en C++!\n";
    return 0;
}
#endif

// Exercice 2 : Lecture et affichage d’un entier
#ifdef EXO_2
int main() {
    int nombre;
    std::cout << "Entrez un nombre: ";
    std::cin >> nombre;
    std::cout << "Vous avez entre: " << nombre << std::endl;
    return 0;
}
#endif

// Exercice 3 : Opérations mathématiques
#ifdef EXO_3
int main() {
    double a, b;
    std::cout << "Entrez deux nombres: ";
    std::cin >> a >> b;

    std::cout << "Somme: " << (a + b) << std::endl;
    std::cout << "Difference: " << (a - b) << std::endl;
    std::cout << "Produit: " << (a * b) << std::endl;

    if (b != 0)
        std::cout << "Quotient: " << (a / b) << std::endl;
    else
        std::cout << "Erreur: Division par zéro !" << std::endl;
    
    return 0;
}
#endif

// Exercice 4 : Détection et correction d’erreurs
#ifdef EXO_4
int main() {
    std::cout << "Entrez un nombre: ";
    int nombre;
    std::cin >> nombre;
    std::cout << "Vous avez entre: " << nombre << std::endl;
    return 0;
}
#endif

// Exercice 5 : Conversion Celsius → Fahrenheit
#ifdef EXO_5
int main() {
    double celsius;
    std::cout << "Entrez une temperature en Celsius: ";
    std::cin >> celsius;

    double fahrenheit = (9.0 / 5.0) * celsius + 32;
    std::cout << "Temperature en Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
#endif
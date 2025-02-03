# TP1 - Tarik Ouabrk

## Description

Ce TP contient des exercices en C++ qui permettent de découvrir les bases du langage C++, incluant l'affichage d'un message, la lecture et l'affichage d'un entier, les opérations mathématiques, la correction d'erreurs, et la conversion de température. 

### Objectifs
- Apprendre à utiliser les entrées/sorties en C++.
- Effectuer des opérations mathématiques simples.
- Corriger des erreurs dans un code.
- Appliquer des formules de conversion.

---

## Instructions pour exécuter le programme

### Prérequis

- Un compilateur C++ supportant le standard C++17.
- Exemple : `g++` (GNU Compiler Collection) ou tout autre compilateur C++ compatible.

---

### Compilation

1. Ouvrez un terminal dans le répertoire du TP où se trouve le fichier `main.c++`.

2. Pour compiler un exercice spécifique, définissez la macro correspondante lors de la compilation à l'aide de l'option `-D` :

   - Pour l'Exercice 1 (Affichage d'un message) :
     ```bash
     g++ -std=c++17 -D EXO_1 main.c++ -o programme
     ```

   - Pour l'Exercice 2 (Lecture et affichage d'un entier) :
     ```bash
     g++ -std=c++17 -D EXO_2 main.c++ -o programme
     ```

   - Pour l'Exercice 3 (Opérations mathématiques) :
     ```bash
     g++ -std=c++17 -D EXO_3 main.c++ -o programme
     ```

   - Pour l'Exercice 4 (Détection et correction d’erreurs) :
     ```bash
     g++ -std=c++17 -D EXO_4 main.c++ -o programme
     ```

   - Pour l'Exercice 5 (Conversion Celsius → Fahrenheit) :
     ```bash
     g++ -std=c++17 -D EXO_5 main.c++ -o programme
     ```

3. Vous ne pouvez pas définir plusieurs exercices . Par exemple :
   ```bash
   g++ -std=c++17 -D EXO_1 -D EXO_2 main.c++ -o programme


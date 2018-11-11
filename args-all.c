#include <stdio.h>

int main(int argc, char* argv[]) {
    // le code `%d` permet de préciser à `printf` que l'on veut afficher un nombre entier
    printf("il y a %d arguments\n", argc);

    // déclaration d'une variable de type integer (nombre entier)
    int i;

    // affectation d'une valeur à une variable
    // boucle for
    for (i = 0; i < argc; i++) {
        // le code `%s` permet de préciser à `printf` que l'on veut afficher une chaîne de caractères
        // la notation `foo[i]` permet de cibler un élément dans un tableau
        printf("argument %d : %s\n", i, argv[i]);
    }

    return 0;
}


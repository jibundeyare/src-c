#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // s'il y a moins de 2 arguments (c-à-d moins de 1 transmis par l'utilisateur), on affiche un message d'erreur
    if (argc < 2) {
        printf("erreur : vous devez donner au moins un nombre entier\n");
        printf("exemple : %s 42\n", argv[0]);

        return 1;
    }

	int rank;
	rank = atoi(argv[1]);
    int i;
    int sum = 0;

    for (i = 1; i <= rank; i++) {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
	// s'il n'y a pas 2 arguments (c-à-d 1 argument de l'utilisateur), on affiche un message d'erreur
	if (argc != 2) {
		printf("erreur : vous devez parier pile (1) ou face (0)\n");
		printf("exemple : %s 0\n", argv[0]);

		return 1;
	}

	// obtention du pari du joueur
	int j = atoi(argv[1]);

	if (j != 0 && j != 1) {
		printf("erreur : vous devez parier pile (1) ou face (0)\n");
		printf("exemple : %s 0\n", argv[0]);

		return 1;
	}

	// affichage du pari
	if (j == 0) {
		// si l'utilisateur a parié 0, on a face
		printf("vous avez parié : face\n");
	} else {
		// sinon on a pile
		printf("vous avez parié : pile\n");
	}

	// initialisation du moteur de nombre aléatoire
	srand(time(NULL));

	// obtention d'un nombre aléatoire compris entre 0 et 1
	int i = rand() % 2;

	// affichage du tirage
	if (i == 0) {
		// si on obtiens 0, on a face
		printf("tirage : face\n");
	} else {
		// sinon on a pile
		printf("tirage : pile\n");
	}

	// comparaison entre le tirage et le pari
	if (i == j) {
		printf("gagné :)\n");
	} else {
		printf("perdu :(\n");
	}

	return 0;
}


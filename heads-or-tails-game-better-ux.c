#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[]) {
	// s'il n'y a pas 2 arguments (c-à-d 1 argument de l'utilisateur), on affiche un message d'erreur
	if (argc != 2) {
		printf("erreur : vous devez parier pile ou face\n");
		printf("exemple : %s pile\n", argv[0]);

		return 1;
	}

	// obtention du pari du joueur
	int j;

	// comparons l'argument utilsateur avec la chaîne de caractère "face" puis "pile" pour savoir ce qu'il a parié
	// la fonction `strcmp()` renvoit 0 s'il n'y a pas de différence entre deux chaînes de caractères
	// autrement dit, si le résultat de la comparaison avec `strcmp()` est égal à zéro, les deux chaînes de caractères sont identiques
	if (strcmp(argv[1], "face") == 0) {
		// la chaîne de caractères est identique à "face"
		j = 0;
	} else if (strcmp(argv[1], "pile") == 0) {
		// la chaîne de caractères est identique à "pile"
		j = 1;
	} else {
		// la chaîne de caractères ne correspond ni à "face" ni à "pile"
		printf("erreur : vous devez parier pile ou face\n");
		printf("exemple : %s pile\n", argv[0]);

		return 1;
	}

	// affichage du pari
	printf("vous avez parié : %s\n", argv[1]);

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


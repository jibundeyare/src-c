#include <stdio.h>
#include <stdlib.h>
// include de notre propre librairie
#include "average-lib.c"

int main(int argc, char* argv[]) {
	// s'il y a moins de 3 arguments (c-à-d moins de 2 arguments utilisateur), on affiche un message d'erreur
	if (argc < 3) {
		printf("erreur : vous devez donner au moins deux nombres\n");
		printf("exemple : %s 42 123\n", argv[0]);

		// il y a une erreur
		return 1;
	}

	// conversion du tableau de chaîne de caractères en tableau de floats
	int i;
	int c = argc - 1;
	float v[c];

	for (i = 1; i < argc; i++) {
		v[i - 1] = atof(argv[i]);
	}

	// calcul de la moyenne
	float r = average(c, v);

	// affichage de la moyenne
	printf("%.2f\n", r);

	return 0;
}


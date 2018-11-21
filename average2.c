#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	// s'il y a moins de 3 arguments (c-à-d moins de 2 arguments utilisateur), on affiche un message d'erreur
	if (argc < 3) {
		printf("erreur : vous devez donner au moins deux nombres\n");
		printf("exemple : %s 42 123\n", argv[0]);

		// il y a une erreur
		return 1;
	}

	// calcul de la moyenne
	int i;
	float arg;
	float sum = 0;
	float average = 0;

	for (i = 1; i < argc; i++) {
		arg = atof(argv[i]);
		sum = sum + arg;
	}

	average = sum / (argc - 1);

	// affichage de la moyenne
	printf("%.2f\n", average);

	return 0;
}


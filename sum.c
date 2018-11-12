#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	// s'il y a moins de 3 arguments (c-à-d moins de 2 arguments utilisateur), on affiche un message d'erreur
	if (argc < 3) {
		printf("erreur : vous devez donner au moins deux nombres entiers\n");
		printf("exemple : %s 42 123\n", argv[0]);

		return 1;
	}

	int i;
	int arg;
	int sum = 0;

	for (i = 1; i < argc; i++) {
		arg = atoi(argv[i]);
		sum = sum + arg;
	}

	printf("%d\n", sum);

	return 0;
}


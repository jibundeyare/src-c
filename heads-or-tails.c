#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
	// initialisation du moteur de nombre aléatoire
	srand(time(NULL));

	// obtention d'un nombre aléatoire compris entre 0 et 1
	int i = rand() % 2;

	if (i == 0) {
		// si on obtiens 0, on a face
		printf("tirage : face\n");
	} else {
		// sinon on a pile
		printf("tirage : pile\n");
	}

	return 0;
}


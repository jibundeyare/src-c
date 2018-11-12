#include <stdio.h>
#include <stdlib.h>

int fibonacci(int rank) {
	// structure de contrôle
	if (0 == rank) {
		return 0;
	} else if (1 == rank) {
		return 1;
	} else {
		int rank1 = rank - 1;
		int rank2 = rank - 2;
		int f1 = fibonacci(rank1);
		int f2 = fibonacci(rank2);
		int f = f1 + f2;

		// @debug
		/* printf("rank1: %d\n", rank1); */
		/* printf("rank2: %d\n", rank2); */
		/* printf("f1: %d\n", f1); */
		/* printf("f2: %d\n", f2); */
		/* printf("f: %d\n", f); */
		/* printf("\n"); */

		return f;
	}
}

int main(int argc, char* argv[]) {
	// s'il y a moins de 2 arguments (c-à-d moins de 1 argument utilisateur), on affiche un message d'erreur
	if (argc < 2) {
		printf("erreur : vous devez préciser le rang\n");
		printf("exemple : %s 3\n", argv[0]);

		// il y a une erreur
		return 1;
	}

	int rank = atoi(argv[1]);
	int f = fibonacci(rank);

	printf("%d\n", f);

	return 0;
}


#include <stdio.h>

int main(int argc, char* argv[]) {
	// s'il y a moins de 2 arguments (c-à-d moins de 1 argument utilisateur), on affiche un message d'erreur
	if (argc < 2) {
		printf("erreur : vous devez donner au moins un argument\n");
		// le code `%s` permet de préciser à `printf` que l'on veut afficher une chaîne de caractères
		printf("exemple : %s foo\n", argv[0]);

		return 1;
	}

	// déclaration d'une variable de type integer (nombre entier)
	int i;

	// affectation d'une valeur à la variable
	i = 1;

	// le code `%d` permet de préciser à `printf` que l'on veut afficher un nombre entier
	// l'écriture `\"` permet d'afficher les guillemets doubles
	printf("votre argument %d est \"%s\"\n", i, argv[i]);

	return 0;
}


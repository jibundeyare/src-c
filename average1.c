#include <stdio.h>

int main(int argc, char *argv) {
	int numbers[] = {42, 3, 2, 10, 50, 123};
	int numberCount = 6;

	// alternative plus longue à écrire
	/* int numbers[6]; */
	/* numbers[0] = 42; */
	/* numbers[1] = 3; */
	/* numbers[2] = 2; */
	/* numbers[3] = 10; */
	/* numbers[4] = 50; */
	/* numbers[5] = 123; */

	int i;
	// déclarer une variable `sum`
	// affecter la valeur 0 à la variable `sum`
	int sum = 0;
	// déclarer une variable `moyenne` de type float
	// affecter la valeur 0 à la variable `moyenne`
	float moyenne = 0;

	for (i = 0; i < numberCount; i++) {
		printf("à l'index %d se trouve la valeur %d\n", i, numbers[i]);
		// affecter à la variable `sum` la valeur de `numbers[i]` + la valeur de `sum`
		// sum = sum + numbers[i];
		// alternative plus courte à écrire
		sum += numbers[i];
	}

	// affecter à la variable `moyenne` le résultat de la division de `sum` par `numberCount`
	// exemple pour convertir à la volée un "integer" en "float" :
	// int foo = 2;
	// int bar = 3;
	// float baz = (float) foo / bar;
	moyenne = (float) sum / numberCount;

	// afficher la variable `moyenne`
	// exemple : printf("%0.2f\n", unFloat);
	printf("la moyenne : %0.2f\n", moyenne);

	return 0;
}


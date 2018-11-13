/**
 * calcul une moyenne
 *
 * @param count indique le nombre d'élément dans le tableau de valeurs
 * @param values tableau de valeurs
 * @return la moyenne
 */
float average(int count, float values[]) {
	int i;
	float sum = 0;

	for (i = 0; i < count; i++) {
		sum = sum + values[i];
	}

	return sum / count;
}


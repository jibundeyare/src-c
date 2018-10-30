#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // structure de contrôle
    if (argc < 3) {
        printf("erreur : vous devez donner au moins deux nombres\n");
        printf("exemple : %s 42 123\n", argv[0]);

        // il y a une erreur
        return 1;
    }

    int i;
    float arg;
    float sum = 0;
    float average = 0;

    for (i = 1; i < argc; i++) {
        arg = atof(argv[i]);
        sum = sum + arg;
    }

    average = sum / (argc - 1);

    printf("%.2f\n", average);

    return 0;
}

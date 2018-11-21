#include <stdio.h>
#include "addition-lib.c"

int main(int argc, char* argv[]) {
	int r = addition(1, 2);

	printf("r = %d\n", r);

	return 0;
}


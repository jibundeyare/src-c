/**
 * [c - Explain stack overflow and heap overflow in programming with example? - Stack Overflow](https://stackoverflow.com/questions/4700998/explain-stack-overflow-and-heap-overflow-in-programming-with-example)
 * [memory management - What and where are the stack and heap? - Stack Overflow](https://stackoverflow.com/questions/79923/what-and-where-are-the-stack-and-heap)
 * [c++ - What is a segmentation fault? - Stack Overflow](https://stackoverflow.com/questions/2346806/what-is-a-segmentation-fault)
 */

#include <stdio.h>
#include <string.h>

void stackOverflow(const char *x) {
	/* déclaration d'une chaîne de caractères de 1 caractère de long */
	char y[1];

	/* copie de la chaîne de caractères passée en paramètre dans la chaîne dans la variable "trop petite" */
	strcpy(y, x);
}

int main(int argc, char* argv[]) {
	/* appel de la fonction avec un paramètre "trop grand" */
	stackOverflow("foo bar baz");

	return 0;
}


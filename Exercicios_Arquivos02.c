#include <stdio.h>

int main(void) {
	FILE* b = fopen("repetido.txt", "r");
	int nrep = 0;
	char l1, l2;
	fscanf(b, "%c", &l1);
	while (fscanf(b, "%c", &l2) != EOF) {
		if (l1 == l2) {
			nrep++;
		}
	}
	printf("Esse arquivo repete a letra %c %d vezes.\n", l1, nrep);
}

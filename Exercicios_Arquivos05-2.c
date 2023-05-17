#include <stdio.h>
#include <stdlib.h>

char descriptografar(char x) {
	char l;
	if ('a' <= x <= 'z' && 'A' <= x <= 'Z') {
		l = x - 3;
	}
	else {
		l = x;
	}
	return l;
}
int main(void) {
	int n = 0;
	char crip[70];
	char norm[70];
	FILE* j = fopen("descriptografar.txt", "r");
	if (j == NULL) {
		printf("Erro na abertura do arquivo 1.\n");
		exit(1);
	}
	FILE* k = fopen("descriptografado.txt", "w");
	if (k == NULL) {
		printf("Erro na abertura do arquivo 2.\n");
		exit(1);
	}
	while (!feof(j)) {
		fscanf(j, "%c", &crip[n]);
		norm[n] = descriptografar(crip[n]);
		fprintf(k, "%c", norm[n]);
		n++;
	}
	printf("Arquivo descriptografado.\n");
	fclose(j);
	fclose(k);
	return 0;
}
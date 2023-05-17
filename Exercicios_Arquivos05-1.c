#include <stdio.h>
#include <stdlib.h>

char criptografar(char x) {
	char l;
	if ('a' <= x <= 'z' && 'A' <= x <= 'Z') {
		l = x + 3;
	}
	else {
		l = x;
	}
	return l;
}


int main(void) {
	int n = 0;
	char norm[70];
	char crip[70];
	FILE* d = fopen("criptografar.txt", "r");
	if (d == NULL) {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	FILE* f = fopen("criptografado.txt", "w");
	if (f == NULL) {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	while (!feof(d)) {	
		if (fscanf(d, "%c", &norm[n]) == 1) {
			crip[n] = criptografar(norm[n]);
			fprintf(f, "%c", crip[n]);
			n++;
			}
	}
	printf("Arquivo criptografado.\n");
	fclose(d);
	fclose(f);
	return 0;
}

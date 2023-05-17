#include <stdio.h>
#include <stdlib.h>

char criptografar(char a) {
	char b;
	if (a != '\n') {
		b = a + 3;
	}
	else {
		b = a;
	}
	return b;
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
	//if();
	while (fscanf(d, "%c", &norm[n])==1) {
		fscanf(d, "%c", &norm[n]);
		crip[n] = criptografar(norm[n]);
		fprintf(f, "%c", crip[n]);
		n++;	
	}
	printf("Arquivo criptografado.\n");
	fclose(d);
	fclose(f);
	return 0;
}

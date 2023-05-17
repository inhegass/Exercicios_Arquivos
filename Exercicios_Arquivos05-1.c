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
	FILE* h = fopen("criptografar.txt", "r");
	if (h == NULL) {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	FILE* i = fopen("criptografado.txt", "w");
	if (i == NULL) {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	//if();
	while (fscanf(h, "%c", &norm[n])==1) {
		fscanf(h, "%c", &norm[n]);
		crip[n] = criptografar(norm[n]);
		fprintf(i, "%c", crip[n]);
		n++;	
	}
	printf("Arquivo criptografado.\n");
	fclose(h);
	fclose(i);
	return 0;
}

#include <stdio.h>

int main(void) {
	FILE* a = fopen("vazio.txt", "r");
	if (a == NULL) {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	int nlinhas = 0;
	char l;
	while (fscanf(a, "%c", &l) != EOF) {
		if (l == '\n') {
			nlinhas++;
		}
	}
	printf("Esse arquivo possui %d linhas", nlinhas);
	fclose(a);
	return 0;
}
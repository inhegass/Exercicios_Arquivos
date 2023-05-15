#include <stdio.h>
int main(void) {
	FILE* c = fopen("transcrever.txt", "r");
	if (c == NULL) {
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	char l;
	while (fscanf(c, "%c", &l) != EOF) {
		printf("%c", l);
	}
	fclose(c);
	return 0;
}
#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *file = fopen(argv[1], "r");

	char c;
	while ((c = fgetc(file)) != EOF) {
		putchar(c);
	}
	fclose(file);
	return 0;
}

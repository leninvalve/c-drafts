#include <stdio.h>

int read_line(char line[]);

int main()
{
	char line[4];
	int i;

	while (read_line(line)) {
		printf(">> Array repr: ");
		putchar('[');
		for (i = 0; i < 4; i++)
			printf("(%c) ", line[i]);
		putchar(']');
		putchar('\n');
		printf(">> Str repr: %s\n", line);
	}
		
}

int read_line(char line[])
{
	int c;
	int index;

	index = 0;
	while ((c = getchar()) != EOF && c != '\n')
		line[index++] = c;
	
	line[index] = '\0';
	return index;
}

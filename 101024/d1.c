#include <stdio.h>

int read_line(char line[]);

int main()
{
	// Declares a character array to hold up to 4 elements.
	char line[4];
	int i;

	// Loop runs till read_line() returns a 0.
	// This is because C treats the integer 0 as false
	// and any other integer as true.
	// The test part of the while would also be:
	// while (read_line(line) > 0)
	// If read_line(line) returns 0, then 0 > 0 evaluates to false
	// and you leave the loop.
	// Which one is better? For readability I'd prefer the one above.
	// My current knowledge ignores whether or not using one or the other
	// modifies the performance of the program.
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

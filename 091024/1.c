#include <stdio.h>

int main()
{
	int open, closed;
	open = closed = 0;
	int c;
	while ((c = getchar()) != EOF) {
		if c == '(') open++;
		if (c == ')') closed++;
	}

	if (open == closed)
		printf("Syntax OK");
	else
		printf("Syntax Error");
}

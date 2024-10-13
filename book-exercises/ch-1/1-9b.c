#include <stdio.h>

int main(void)
{
	int c, last_char;

	last_char = 'n';
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (last_char != ' ')
				putchar(c);
		} else {
			putchar(c);
		}

		last_char = c;
	}
}

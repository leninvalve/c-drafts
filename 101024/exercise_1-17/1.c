#include <stdio.h>
#define MAX_LEN_ALLOWED 200
#define MAX_CHARS_PER_LINE 30

int read_line(char line[]);

int main()
{
	char line[MAX_LEN_ALLOWED];
	int total_chars;
	
	while ((total_chars = read_line(line)))
		if (total_chars > MAX_CHARS_PER_LINE)
			printf("%2d | %s\n", total_chars, line);

	return 0;
}

int read_line(char line[])
{
	int c;
	int total_chars;

	total_chars = 0;
	while ((c = getchar()) != EOF && c != '\n')
		line[total_chars++] = c;
		
	line[total_chars] = '\0';

	return total_chars;
}

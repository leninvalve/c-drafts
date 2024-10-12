#include <stdio.h>

int main(void)
{
	// When compiling, a warning reads:
	// 'unknown escape sequence'
	printf("\c\n");
	return 0;
}

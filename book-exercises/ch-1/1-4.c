#include <stdio.h>

int main(void)
{
	int lower, step, upper;
	float celsius, fahr;

	lower = 0;
	step = 20;
	upper = 300;

	printf("CEL | FAHR\n");
	celsius = lower;
	while (celsius <= 300) {
		fahr = ((9.0 * celsius) / 5.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

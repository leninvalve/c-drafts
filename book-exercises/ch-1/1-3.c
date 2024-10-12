#include <stdio.h>

int main(void)
{
	int lower, step, upper;
	float fahr, celsius;

	lower = 0;
	step = 20;
	upper = 300;

	// Print a heading to the table.
	printf("Fah | Cel\n");
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

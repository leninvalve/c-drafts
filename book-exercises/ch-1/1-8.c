#include <stdio.h>

int main(void)
{
	int c, bs, ts, nl;
	bs = ts = nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++bs;
		if (c == '\t')
			++ts;
		if (c == '\n')
			++nl;
	}

	printf("%d blanks, %d tabs and %d newlines\n", bs, ts, nl);
}

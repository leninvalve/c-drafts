/* What if I create a source code file without a
 * main function.
 * Just define a function and call it.
 * Theoretically I know I need the main function
 * since it is the entry point. */

int dummy(void);

int dummy(void)
{
	return 9;
}

dummy();

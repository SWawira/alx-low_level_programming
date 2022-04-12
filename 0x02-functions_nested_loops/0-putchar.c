#include "main.h"
/**
 * main - Prints _putchar followed by a new line.
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
	char pchar[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(pchar[i]);
	}
	putchar('\n');
	return (0);
}

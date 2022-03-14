#include <stdio.h>

/**
 * main - print alphabet except q and e.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}

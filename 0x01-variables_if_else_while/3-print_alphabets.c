#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

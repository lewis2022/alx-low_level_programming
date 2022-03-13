#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		putchar(toupper(alphabet[i]));
		i++;
	}
	putchar('\n');
	return (0);
}

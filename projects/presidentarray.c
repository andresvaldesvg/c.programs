#include <stdio.h>

int main ()
{
	char *presidents[3] = 
	{
		"Tim",
		"Sam",
		"Charles"
	};
	int x;
	char *ptr;

	for (x = 0; x <3; x++)
	{
		ptr = presidents[x];
		while(*ptr != '\0')
		{
			putchar(*ptr);
			ptr++;
		}
		putchar('\n');
	}
	return (0);
}

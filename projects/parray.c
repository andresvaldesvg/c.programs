#include <stdio.h>

int main()
{
	char *months [3] = 
	{
		"one",
		"two",
		"three"
	};
	int x;

	for(x = 0; x < 3; x++)
		printf("%s\n", months[x]);

	return (0);
}


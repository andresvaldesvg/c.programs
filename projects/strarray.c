#include <stdio.h>

int main()
{
	char names[4][5] = {
		"And",
		"Bee",
		"Cat",
		"Duck"
	};
	int x;

	for (x = 0; x < 4; x++)
		printf("%s\n", names[x]);

	return (0);
}

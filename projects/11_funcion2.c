#include <stdio.h>

void soup(void)
{
	puts("Soup!");
}

int main()
{
	printf("For breakfast I had ");
	soup();
	printf("For lunch I had ");
	soup();
	printf("For dinner I also had ");
	soup();

	return (0);
}

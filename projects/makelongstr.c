#include <stdio.h>

int	main()
{
	char name[64];

	printf("Your name is and more:\n");
	fgets(name,64, stdin);
	puts("Intructions here and name:\n");
	puts(name);

	return(0);
}

#include <stdio.h>

int	main()
{
	int a;

	printf("Type an integer: ");
	scanf("%d",&a);
	if(a > 10)
	{
		printf("%d is greater than 10. \n", a);
	}
	else
		printf("%d is lower than 10. \n", a);

	return(0);
}

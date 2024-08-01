#include <stdio.h>

int main()
{
	int a; 
	char b;
	float c; 

	puts("Memory location:");
	printf("A is at %p\n", &a);
	printf("B is at %p\n",&b);
	printf("C is at %p\n",&c);

	return (0);
}

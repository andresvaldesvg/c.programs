#include <stdio.h>
//This is calling the function blorf to excute later on.
void blorf(void);
//There are two functions down below to use the function stablishes previously.
int main()
{
	puts("The main() function always runs first");
	blorf();// Here is there function is called to be excute.
	puts("Thanks, blorf()");

	return(0);
}
//In here the function is being created.
void blorf(void)
{
	puts("The blorf() function runs when it's called");
}

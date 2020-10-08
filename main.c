#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTWO (int a, int b)
{
	int output	;
	output = a+b	;
	return output	;

}

int square (int n)
{
	int output	;
	output = n*n	;
	return output;
}

int get_max(int x, int y)
{
	int output	;
	if (x<y)
		output = y	;
	else if (x> y)
		output = x	;
	return output	;
	 } 
int main(void) {
	
	int sum	;
	int squareresult	;
	int maxresult	;
	
	sum = sumTWO(2,5)	;
	printf("Sum result is %i\n", sum)	;
	 
	squareresult = square(5)	;
	printf("square result is %i\n", squareresult)	;
	
	maxresult = get_max (11, 7)	;
	printf("max result is %i\n", maxresult)	;
	

}

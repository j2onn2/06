#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer ()
{
	int a	;
	printf("값을  입력하시오 : ");
	scanf("%i", &a)	;
	
	return a	;
}




int factorial (int b)
{
	int res = 1	;
	int i	;
	for (i=1;	i<=b;	i++)	
	{
		res=res*i	;
	}
	return res;
}

int combination (int n, int r )
{
	int n1, n2, n3;
	
	n1 = factorial(n)	;
	n2 = factorial(n-r)	;
	n3 = factorial(r)	;
	return (n1/(n2*n3))	;
}

int main (void)
{
	int n, r, result	;
	
	n=get_integer()	;
	
	r=get_integer()	;

	result =combination(n,r)	;
	printf("The result is %i\n", result)	;
}


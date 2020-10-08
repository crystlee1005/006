#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

   #include <stdio.h> 
int sumTwo(int a, int b)
{
	   return(a+b);
}
int square(int n)
{
	   return(n*n);
}
int get_max(int x, int y)
{
	   if ( x>y)
	   return(x);
	   else if ( x<y)
	   return(y); 
}
int main(void)
{
	printf("sumTwo: %i\n", sumTwo( 1, 2));
	printf("square: %i\n",square(3));
	printf("get_max: %i\n", get_max(4,5));

	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

   #include <stdio.h> 
void sumTwo(int a, int b)
{
	   printf("%i", a+b);
}
void square(int n)
{
	   printf("%i", n*n);
}
void get_max(int x, int y)
{
	   if ( x>y)
	   printf("%i", x);
	   else if ( x<y)
	   printf("%i", y); 
}
int main(void)
{
	sumTwo( 1, 2);
	square(3);
	get_max(4,5);

	
	return 0;
}

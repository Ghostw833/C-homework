#include <stdio.h>

int main (void)
{
	int a,b,c,max,num; 
	scanf("%d",&num);
	a = num / 100; 
	b = (num / 10) % 10; 
	c = num % 10;
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("%d",max);
	return 0;
}
 
  

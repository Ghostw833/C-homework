#include <stdio.h>

int num (int a)
{
	if (a<0)
	a = a * (-1);
	else 
	a = a * 1;
	return a;
}

int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",num(a));
	return 0;
}
 

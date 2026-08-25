#include <stdio.h>

int sum (int n)
{
	int min = 1;
	if (n < min) 
	return 0;
	else 
	return n;
}

int main ()
{
	int n, result=0;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
		result = result + i;
	}
	printf("%d\n",result);
	return 0;
}

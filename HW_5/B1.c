#include <stdio.h>

int main (void)
{
	int a,n;  
	scanf("%d",&a);
	for (n=1;n<=a;n++) { 
		printf("%d %d %d\n",n, n*n, n*n*n);
	}
	return 0;
}

#include <stdio.h>

int main (void)
{
	int a,b,n;
	scanf("%d %d",&a,&b);
	for (n=a;n<=b;n++) {
		printf("%d ",n * n);
	}
	return 0;
}

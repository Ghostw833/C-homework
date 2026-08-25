#include <stdio.h>

int main (void)
{
	int a,b,n;
	int num=0,sum=0;
	scanf("%d %d",&a,&b);
	for (n=a;n<=b;n++) {
		num = n*n;
		sum=sum+num;
	}
		printf("%d ",sum);
		return 0;
}

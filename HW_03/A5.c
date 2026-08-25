#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	float x = (a + b + c)/3.0; 
	printf("%.2f\n",x);
	return 0;
}

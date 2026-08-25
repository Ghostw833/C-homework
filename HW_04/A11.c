#include <stdio.h>

int main (void)
{
	int a,b,c,d,e,min,max,sum;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	max = a, min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	if (d < min) {
		min = d;
	}
	if (e < min) {
		min = e;
	}
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	if (e > max) {
		max = e;
	}
	sum = max + min;
	printf("%d",sum);
	return 0;
}

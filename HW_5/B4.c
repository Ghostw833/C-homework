#include <stdio.h>

int main(void)
{
	int a=100,b=999,n;
	scanf("%d",&n);
		if (n<a || n>b) {
			printf("NO");
		}
		if (n>=a && n<=b) {
			printf("YES");
		}
	return 0;
}



#include <stdio.h>
int func(int n)
{
if (n <= 1) {
return n;
}
return n + (func(n-1));
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",func(n));
	return 0;
}



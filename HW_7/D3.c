

#include <stdio.h>
void func(int n)
{
	int digit;
	digit = n % 10;
	printf("%d ",digit);
	n = n / 10;
	if (n==0) return;
	func(n);
}



int main()
{
	int n;
	scanf("%d",&n);
	func(n);
	return 0;
}


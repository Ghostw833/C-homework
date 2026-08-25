

#include <stdio.h>
void num(int n)
{
	if (n <= 0) {
		return;
	}
	int digit;
	digit = n % 2;
	n = n / 2;
	num(n);
	printf("%d",digit);
}




int main()
{
	int n;
	scanf("%d",&n);
	if (n == 0) {
		 printf("%d",n);
		 return 0;
	}
	num(n);
	return 0;
}


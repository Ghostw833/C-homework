#include <stdio.h>

int main(void)
{
	int num, sum;
	int digit3, digit2, digit1;
	scanf("%d",&num);
	digit3 = num % 10;
	digit2 = (num / 10) % 10;
	digit1 = num / 100;
	sum = digit1 + digit2 + digit3;
	printf("%d",sum);
	return 0;
}


	

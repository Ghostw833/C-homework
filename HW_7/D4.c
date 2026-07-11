

#include <stdio.h>
void print_num(int num)
{
	if (num < 10) { 
		printf("%d ",num);
		return;
	}
	int digit;
	digit = num % 10;
	num = num / 10;
	print_num(num);
	printf("%d ",digit);
	return;
}



int main()
{
	int num;
	scanf("%d",&num);
	print_num(num);
	return 0;
}


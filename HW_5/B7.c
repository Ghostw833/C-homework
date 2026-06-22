#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d",&a);
	int used[10] = {0}; 
	while (a > 0) {
		int current_digit = a % 10;
		
		if (used[current_digit] == 1) {
			printf("YES\n");
			return 0;
		}
		used [current_digit] = 1;
		a = a / 10;
	}
	printf("NO\n");
	return 0;
}


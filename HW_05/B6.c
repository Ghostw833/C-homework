#include <stdio.h>

int main(void)
{
	char num[100];
	int identical=0; 
	int n;
	scanf("%99s",num);
	for (n = 1; num[n] != '\0'; n++){
		if (num[n] == num[n - 1]) {
			identical = 1;
			break;
		}
	}
	if (identical == 1) {
		printf("YES");
	}
		else {
			printf("NO");
		}
	return 0;
}



#include <stdio.h>

int main()
{
	int result = 0;
	int arr[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] > 0) {
			result = result + arr[i] ;
		}
	}
	printf("%d \n",result);
	return 0;
}


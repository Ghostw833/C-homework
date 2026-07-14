

#include <stdio.h>

int main()
{
	int max_pos=0;
	int min_pos=0;
	int arr[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_pos = i;
		}
	}
	int min = arr[0];
	for (int i = 1; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
			min_pos = i;
		}
	}
	printf("%d %d %d %d\n",max_pos+1,max,min_pos+1,min);
	return 0;
}


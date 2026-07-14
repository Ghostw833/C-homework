


#include <stdio.h>

int main()
{
	int arr[5];
	signed int min = 0;
	for (int i = 0; i < 5; i++) {
		scanf ("%d",&arr[i]);
	}
	min = arr[0];
	if (arr[1] < min) min = arr[1];
	if (arr[2] < min) min = arr[2];
	if (arr[3] < min) min = arr[3];
	if (arr[4] < min) min = arr[4];
	printf("%d\n",min);
	return 0;
}


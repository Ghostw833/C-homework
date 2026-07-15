

#include <stdio.h>

int main()
{
	double result = 0;
	int arr[12];
	for (int i = 0; i < 12; i++) {
		scanf("%d",&arr[i]);
		result = result + arr[i];
	}
	printf("%.2f\n",result	 / 12.0);
	return 0;
}


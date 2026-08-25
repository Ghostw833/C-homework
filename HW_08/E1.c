
#include <stdio.h>

int main()
{
	int arr[5];
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	double result = (arr[0]+arr[1]+arr[2]+arr[3]+arr[4]) / 5.0;
	printf("%.3f\n",result);
	return 0;
}


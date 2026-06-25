#include <stdio.h>


int middle (int a, int b)
{


    int result; 
    result = b + (a - b) / 2;
    if (a < b) 
    result = a + (b - a) / 2;
    return result;
}

int main ()
{
	int a, b;
	scanf("%d %d",&a,&b);

	printf("%d\n",middle(a, b));
	return 0;
}
 

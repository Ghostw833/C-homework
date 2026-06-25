#include <stdio.h>


int power (int n, int p)
{
    if (p == 0) return 1; 

    int result = n;
    for (int i = 1; i < p; i++) {
        result *= n;
    }   
    return result;
}

int main ()
{
	int n,p;
	scanf("%d %d",&n,&p);
	if (n < 1000 && p >= 0) {
		printf("%d\n",power(n,p));
	}
	else { 
		printf("Error\n");
	}
	return 0;
}
 



#include <stdio.h>
void func(int n) {
 static int a=1;
 printf("%d ",a);
 a++;
 if (a <= n) {
 func(n);
}

}

int main(void)
{
	int n;
	scanf("%d",&n);
	func(n);
 return 0;
}



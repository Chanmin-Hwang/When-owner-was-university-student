#include <stdio.h>
int main(void)
{
	struct test {
		int a : 3,b : 4;
	} x = {0};
	for (;;)
		printf("x.a = %2d	x.b = %2d\n",x.a++,x.b++);
	return 0;
}

#include<stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf("%d%d", &num1, &num2);
	printf("%.9f", (double)num1 / num2);
	return 0;
}
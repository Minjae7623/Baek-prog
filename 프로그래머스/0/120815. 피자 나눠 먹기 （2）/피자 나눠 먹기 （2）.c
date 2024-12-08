#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int GCD(int a, int b)
{
	if (a % b == 0)
		return b;
	return GCD(b, a % b);
}

int solution(int n) {
	int LCM = n * 6 / GCD(n, 6);
	int answer = LCM / 6;
	return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
	int* answer = (n % 2 == 0) ? malloc(n / 2 * sizeof(int)) : malloc(n / 2 * sizeof(int) + 1);

	for (int i = 1, j = 0; i <= n; i += 2)
		answer[j++] = i;

	return answer;
}
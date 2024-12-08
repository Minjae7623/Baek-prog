#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
	int answer = 0;
	int result = 0;

	while (answer < n)
		answer = slice * ++result;

	return result;
}
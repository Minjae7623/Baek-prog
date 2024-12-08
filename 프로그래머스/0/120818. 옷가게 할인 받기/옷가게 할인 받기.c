#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
	int dis = 0;

	dis = price >= 500000 ? 20 : (price >= 300000) ? 10 : (price >= 100000) ? 5 : 0;

	return price * (100 - dis) * 0.01;
}
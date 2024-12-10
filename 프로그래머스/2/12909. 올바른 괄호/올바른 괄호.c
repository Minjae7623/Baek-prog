#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

bool solution(const char* s) {//stack 쓰니까 시간초과 뜸, 다른 방법 없을까
	int count = 0;

	if (s[strlen(s) - 1] == '(')
		return false;

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '(')
			count++;
		else if (s[i] == ')')
		{
			count--;
			if (count < 0)
				return false;
		}
	}

	return !(count);
}
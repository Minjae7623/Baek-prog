#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

typedef char element;

typedef struct STACK
{
	int top;
	element* strStack;
}STACK;


void InitStack(STACK* s, int length)
{
	s->top = -1;
	s->strStack = (element*)calloc(length + 1, sizeof(element)); //\0 
}

//void Delete(STACK* s)
//{
//    free(s->str);
//    free(s);
//}

int IsEmpty(STACK* s)
{
	return (s->top == -1);
}

int IsFull(STACK* s, int length)
{
	return (s->top == length - 1);
}

void Push(STACK* s, element data, int length)
{
	if (IsFull(s, length))
	{
		return;
	}
	s->strStack[++(s->top)] = data;
}

element Pop(STACK* s)
{
	if (IsEmpty(s))
	{
		return 0;
	}
	return s->strStack[(s->top)--];
}

element Peek(STACK* s)
{
	return s->strStack[s->top];
}

bool solution(const char* string) {
	STACK* stack = (STACK*)malloc(sizeof(STACK));
	int length = strlen(string);

	if (string[length - 1] == '(')
		return false;

	InitStack(stack, length);

	for (int i = 0; i < length; i++)
	{
		if (string[i] == '(')
			Push(stack, string[i], length);
		else if (IsEmpty(stack))
			return false;
		else
			Pop(stack);
	}

	return IsEmpty(stack);
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char element; //data type.
int capa = 0;
typedef struct stackType
{
	element* stack;
	int capacity;
	int top;
}stackType;

void InitStack(stackType* s)
{
	s->top = -1;
	s->capacity = capa;
	s->stack = (element*)malloc(s->capacity * sizeof(element));
}

void FreeStack(stackType* s)
{
	free(s->stack);
}

int IsFull(stackType* s)
{
	return (s->top == (s->capacity - 1));
}

int IsEmpty(stackType* s)
{
	return (s->top == -1);
}

void Push(stackType* s, element item)
{
	if (IsFull(s))
	{
		s->capacity *= 2;// is full -> x2
		s->stack = (element*)realloc(s->stack, s->capacity * sizeof(element));
	}

	s->stack[++(s->top)] = item;
}

element Pop(stackType* s)
{
	//if (IsEmpty(s))
	//{
	//	fprintf(stderr, "Error: Stack underflow\n");
	//	exit(1);
	//}
	//else
	return s->stack[(s->top)--];
}

element Peek(stackType* s)
{
	//if (IsEmpty(s))
	//{
	//	fprintf(stderr, "Error: Stack underflow\n");
	//	exit(1);
	//}
	//else
	return s->stack[s->top];
}
//////////////stack

int priority(char op)
{
	return (op == '*' || op == '/') ? 2 :
		(op == '+' || op == '-') ? 1 : 0;
}

char* TransInfixToPostfix(stackType* stack, char* str)
{
	static char postfix[100];
	char op = 0;
	int j = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		op = str[i];

		switch (op)
		{
		case '(':
			Push(stack, op);
			break;
		case ')':
			while (Peek(stack) != '(')
				postfix[j++] = Pop(stack);
			Pop(stack); //'(' pop.
			break;
		case '*':
		case '/':
		case '+':
		case '-':
			while (!IsEmpty(stack) && priority(Peek(stack)) >= priority(op))
			{
				postfix[j++] = Pop(stack);
			}
			Push(stack, op);
			break;
			//operand
		default:
			postfix[j++] = op;
		}
	}

	while (!IsEmpty(stack))
		postfix[j++] = Pop(stack);

	postfix[j] = '\0';

	return postfix;
}

void PrintInfixToPostfix(stackType* stack, char* str)
{
	printf("%s \n", TransInfixToPostfix(stack, str));
}


int main()
{
	stackType* stack = (stackType*)malloc(sizeof(stackType));

	char input[100] = { 0 };
	gets(input);

	capa = strlen(input) + 1;
	InitStack(stack);

	PrintInfixToPostfix(stack, input);

	FreeStack(stack);
	free(stack);

	return 0;
}
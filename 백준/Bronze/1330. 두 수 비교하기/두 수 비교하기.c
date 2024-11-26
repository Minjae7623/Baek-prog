int main()
{
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);

	if (a > b)
		puts(">");
	else if (a < b)
		puts("<");
	else
		puts("==");

	return 0;
}
int main()
{
	int A = 0, B = 0;
	int h = 0, t = 0, u = 0;

	scanf("%d%d", &A, &B);
	
	h = B / 100;
	t = (B % 100) / 10;
	u = B % 10;

	printf("%d \n", A * u);
	printf("%d \n", A * t);
	printf("%d \n", A * h);
	printf("%d \n", A * B);

	return 0;
}
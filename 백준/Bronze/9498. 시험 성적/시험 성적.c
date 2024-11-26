int main()
{
	int score = 0;
	char level = 'F';
	scanf("%d", &score);

	switch (score / 10)
	{
	case 10: case 9:
		level = 'A';
		break;
	case 8:
		level = 'B';
		break;
	case 7:
		level = 'C';
		break;
	case 6:
		level = 'D';
		break;
	}
	putchar(level);

	return 0;
}
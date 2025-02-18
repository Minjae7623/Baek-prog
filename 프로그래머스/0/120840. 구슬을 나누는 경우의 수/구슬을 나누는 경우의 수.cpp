//nCr
int solution(int balls, int share) {
    double answer = 1;
    double rFactorial = 1;

    //nCn-r == nCr
    if (balls - share < share)
    {
        share = balls - share;
    }

    //r!
    for (int i = 1; i <= share; ++i)
    {
        rFactorial *= i;
    }

    //nPr
    while (share--)
    {
        answer *= balls--;
    }

    answer /= rFactorial;

    return (int)answer; 
}
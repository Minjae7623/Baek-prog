#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0; // round

    for (int i = 2; i <= n; i *= 2)
    {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        ++answer;

        if (a == b)
            break;
    }

    return answer;
}
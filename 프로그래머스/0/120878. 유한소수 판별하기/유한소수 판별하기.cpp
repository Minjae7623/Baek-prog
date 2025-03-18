#include <string>
#include <vector>

using namespace std;

int getGCD(int a, int b)
{
    if (a % b == 0)
        return b;

    return getGCD(b, a % b);
}

int solution(int a, int b) {
    int answer = 1;
    int gcd = getGCD(a, b);

    b /= gcd; //기약분수로 만든 분모.

    //짝수는 2의 배수이므로 제외.
    for (int i = 3; i <= b; i += 2)
    {
        if (b % i == 0 && i % 5 != 0) //소인수가 2|5가 아니라면 무한소수.
            return 2;
    }

    return answer;
}
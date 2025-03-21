#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for (int i = 1; i <= 10; ++i)
    {
        answer *= i;

        if (answer > n)
            return i - 1;
        if (answer == n)
            return i;
    }

    return 10;
}
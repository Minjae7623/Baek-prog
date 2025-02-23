#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int loop = 3;

    while (++loop <= n)
    {
        int count = 0;

        for (int i = 1; i * i <= loop; ++i)
        {
            if (0 == loop % i)
            {
                ++count;

                if (i * i != loop)
                    ++count;
            }
        }

        if (3 <= count)
            ++answer;
    }
    
    return answer;
}
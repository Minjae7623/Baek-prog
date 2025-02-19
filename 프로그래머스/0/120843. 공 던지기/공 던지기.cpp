#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int idx = 0;
    int leng = numbers.size();

    while (--k)
    {
        if (idx >= leng - 2)
        {
            idx -= (leng - 2);
        }
        else
            idx += 2;
    }


    return answer = numbers[idx];
}
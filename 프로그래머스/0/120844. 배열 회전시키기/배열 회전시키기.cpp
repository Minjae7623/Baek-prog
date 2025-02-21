#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int leng = numbers.size();
    vector<int> answer(leng);

    if ("right" == direction)
    {
        int i = leng + 1;

        while (--i)
        {
            answer[i % leng] = numbers[i - 1];
        }
    }
    else
    {
        int i = leng;
        while (--i)
        {
            answer[i - 1] = numbers[i];
        }
        answer[leng - 1] = numbers[i];
    }

    return answer;
}
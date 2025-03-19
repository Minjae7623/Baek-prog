#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer(num);
    vector<int> numList(1050);
    iota(numList.begin(), numList.end(), -50);
    int i = (num >= total) ? 0 : 50;

    for (; i <= numList.size(); ++i)
    {
        int sum = accumulate(numList.begin() + i, numList.begin() + i + num, 0);

        if (sum == total)
        {
            copy(numList.begin() + i, numList.begin() + i + num, answer.begin());
            break;
        }
    }

    return answer;
}
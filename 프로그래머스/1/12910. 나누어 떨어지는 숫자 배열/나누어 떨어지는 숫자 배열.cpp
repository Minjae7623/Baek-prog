#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    bool isNonDiv = true;

    for (int num : arr)
    {
        if (0 == num % divisor)
        {
            answer.push_back(num);
            isNonDiv = false;
        }
    }

    if (isNonDiv)
        answer.push_back(-1);

    sort(answer.begin(), answer.end());
    return answer;
}
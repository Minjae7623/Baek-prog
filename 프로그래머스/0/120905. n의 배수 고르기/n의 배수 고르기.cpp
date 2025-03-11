#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    answer.reserve(numlist.size());

    for (int num : numlist)
    {
        if (0 == num % n)
            answer.push_back(num);
    }

    return answer;
}

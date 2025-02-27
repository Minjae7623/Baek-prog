#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;

    for (long long i = left; i <= right; ++i)
    {
        long long row   = i / n;
        long long clorm = i % n;
        answer.push_back(max(row, clorm) + 1);
    }

    return answer;
}
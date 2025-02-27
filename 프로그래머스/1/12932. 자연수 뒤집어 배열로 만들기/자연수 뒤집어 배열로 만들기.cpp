#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    string strN = to_string(n);
    int nSize = strN.length();
    vector<int> answer(nSize);

    for (int i = 0; i < nSize; ++i)
    {
        int num = strN[i] - '0';
        answer[nSize - i - 1] = num;
    }

    return answer;
}
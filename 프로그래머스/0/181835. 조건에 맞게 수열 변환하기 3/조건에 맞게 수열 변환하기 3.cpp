#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer(arr.size());

    if (k & 1)// 홀수라면
    {
        for (int i = 0; i < arr.size(); ++i)
        {
            answer[i] = arr[i] * k;
        }
    }

    else
    {
        for (int i = 0; i < arr.size(); ++i)
        {
            answer[i] = arr[i] + k;
        }
    }

    return answer;
}
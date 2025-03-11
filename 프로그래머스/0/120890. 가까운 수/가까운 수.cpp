#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min = 100;

    sort(array.begin(), array.end());

    for (int i = 0; i < array.size(); ++i)//차 구하기
    {
        int sub = abs(array[i] - n);

        if (sub < min)
            min = sub;

        if (array[i] > n)
        {
            break;
        }
    }

    for (int i = 0; i < array.size(); ++i)//가까운 수 여러개일 경우 작은 수 구하기
    {
        int sub = abs(array[i] - n);

        if (sub == min)
        {
            answer = array[i];
            break;
        }
    }

    return answer;
}
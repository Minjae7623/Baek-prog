#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min = 100;

    sort(array.begin(), array.end());

    for (int i = 0; i < array.size(); ++i)
    {
        int sub = abs(array[i] - n);

        if (sub < min)
        {
            min = sub;
            answer = array[i];
        }

        if (array[i] > n)
            break;
    }

    return answer;
}
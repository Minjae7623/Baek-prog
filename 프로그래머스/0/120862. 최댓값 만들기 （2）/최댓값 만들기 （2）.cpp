#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int multi = 1;
    int answer = INT_MIN;
    vector<bool> select(numbers.size(), false);
    select[0] = select[1] = true;

    do
    {
        multi = 1;
        for (int i = 0; i < numbers.size(); ++i)
        {
            if (select[i])
                multi *= numbers[i];
        }
        if (multi > answer)
            answer = multi;

    } while (prev_permutation(select.begin(), select.end()));

    return answer;
}
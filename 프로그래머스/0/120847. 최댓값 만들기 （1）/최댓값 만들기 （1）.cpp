#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    size_t n = numbers.size();
    
    //1. 조합 구하기 nC2
    vector<int> visit(n, 0);
    visit[0] = 1, visit[1] = 1;

    sort(visit.begin(), visit.end());

    do
    {
        vector<int> combi;
        for (int i = 0; i < n; ++i)
        {
            if (1 == visit[i])
            {
                combi.push_back(numbers[i]);
            }
        }

        if (answer < combi[0] * combi[1])
            answer = combi[0] * combi[1];

    } while (next_permutation(visit.begin(), visit.end()));
    
     
    //2. 조합의 곱 중 최댓값 반환하기.
    return answer;
}
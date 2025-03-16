#include <string>
#include <vector>

using namespace std;

// sum >  n > max                                    ->  n이 가장 큰 경우
// max >= n > max - min (n + min = sum(max+1) > max) ->  max가 가장 큰 경우
// 결과: sum > n > max - min , sum - (max- min +1)

int solution(vector<int> sides) {
    int mx  = max(sides[0], sides[1]);
    int mn  = min(sides[0], sides[1]);
    int sum = sides[0] + sides[1];

    int answer = sum - (mx - mn + 1);
    
    return answer;
}
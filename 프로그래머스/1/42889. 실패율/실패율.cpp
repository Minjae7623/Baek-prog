#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 실패율: 해당 스테이지 도달 / 해당 스테이지 이상 도달

//전체 스테이지 수: N
//도달 스테이지: stages

//실패율 기준 내림차순 스테이지 출력
//실패율이 같다면 오름차순
//도달 유저가 없는 경우 실패율 0


bool compare(const pair<int, float>& a, const pair<int, float>& b)
{
    if (a.second != b.second)
        return  a.second > b.second;
    else
        return a.first < b.first;
}


vector<int> solution(int N, vector<int> stages) {
    vector<int> stageCount(N + 1, 0); //idx 예외 방지
    vector<pair<int, float>> failureRates(N, { 0,0.f });

    //해당 스테이지 클리어한 플레이어 수
    for (int stage : stages) {
        ++stageCount[stage - 1];
    }

    int clearUsers = stages.size();

    for (int i = 0; i < N; ++i)
    {
        //first: stage, second: failureRate
        failureRates[i].first = i + 1;
        if (clearUsers > 0)
        {
            failureRates[i].second = (float)stageCount[i] / clearUsers;
            clearUsers -= stageCount[i];
        }
    }

    sort(failureRates.begin(), failureRates.end(), compare);

    vector<int> answer;
    for (const auto& failureRate : failureRates) {
        answer.push_back(failureRate.first);
    }

    return answer;
}
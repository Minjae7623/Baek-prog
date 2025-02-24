#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    //시간 복잡도: O(nlogn) 이하.
    //person1: 1 2 3 4 5             = 5
    //person2: 2 1 2 3 2 4 2 5       = 8
    //person3: 3 3 1 1 2 2 4 4 5 5   = 10
    
    //1. 가장 높은 점수를 받은 사람을 구하라.

    int max = -1;
    int n = answers.size();
    vector<int> person1 = { 1, 2, 3, 4, 5 };
    vector<int> person2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> person3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    //score idx == 사람 식별, 값 == 점수
    vector<int> score(3);

    //answers[]와 패턴이 일치하는지 확인.
    for (int i = 0; i < n; ++i)
    {
        if (answers[i] == person1[i % 5])
        {
            ++score[0];
        }
        if (answers[i] == person2[i % 8])
        {
            ++score[1];
        }
        if (answers[i] == person3[i % 10])
        {
            ++score[2];
        }

    }

    for (int i = 0; i < 3; ++i)
    {
        if (max < score[i])
            max = score[i];
    }


    //2. 동점일 경우, 오름차순 정렬.
    //동점이라면 answer.push_back(idx + 1)
  
    vector<int> answer;
    for (int i = 0; i < 3; ++i)
    {
        if (max == score[i])
        {
            answer.push_back(i + 1);
        }
    }

    return answer;
}
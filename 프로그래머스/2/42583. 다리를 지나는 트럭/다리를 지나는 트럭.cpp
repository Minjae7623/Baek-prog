#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    deque <int> trucQue(truck_weights.begin(), truck_weights.end());
    deque <int> bridgeQue(bridge_length, 0); //0 0 7 4 5 6
    int timer = 0;
    int w = weight;

    //1초 동안 발생하는 일
    //다리를 건너는 중, 다리를 다 건넌다.
    
    //마지막 트럭이 지나간 시간을 알 수 있으면 해결 가능한 문제이므로 트럭큐가 빌 때까지 진행한다.
    while (!trucQue.empty())
    {
        //상시: 다리를 지나는 중
        ++timer;
        w += bridgeQue.front();
        bridgeQue.pop_front();

        //다리 공간 여유 && 무게 여유
        if (bridgeQue.size() < bridge_length && w - trucQue.front() >= 0)
        {
            w -= trucQue.front();
            bridgeQue.push_back(trucQue.front());
            trucQue.pop_front();
        }

        //다리 진입 불가할 경우 0으로 채운다.
        else
        {
            bridgeQue.push_back(0);
        }
    }

    int answer = timer + bridge_length;
    return answer;
}
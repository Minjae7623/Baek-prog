#include <string>
#include <vector>

using namespace std;

enum CASTE
{
    GENERAL = 5,
    SOLDIER = 3,
    WORKER = 1,
};

int solution(int hp) {
    int answer = 0;

    while (hp) 
    {
        if (hp >= GENERAL)          //5~1000
        {
            answer += (hp / GENERAL);
            hp %= GENERAL;
        }
        else if (hp >= SOLDIER)     //4~3
        {
            answer += (hp / SOLDIER);
            hp %= SOLDIER;
        }
        else if (hp >= WORKER)     //2~1
        {
            answer += hp;
            hp = 0;
        }
    }

    return answer;
}
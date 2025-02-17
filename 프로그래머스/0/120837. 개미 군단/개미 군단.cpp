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

    answer += (hp / GENERAL);
    hp %= GENERAL;
    answer += (hp / SOLDIER);
    hp %= SOLDIER;          
    answer += hp;
   
    return answer;
}
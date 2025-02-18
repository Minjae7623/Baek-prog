#include <string>

enum RPS
{
    ROCK =     0,
    PAPER =    5,
    SCISSORS = 2,
};

using namespace std;

string solution(string rsp) {
    string answer = "";

    for (char c : rsp)
    {
        int i = c - '0';
        switch (i)
        {
        case ROCK:
            answer += to_string(PAPER);
            break;

        case PAPER :
            answer += to_string(SCISSORS);
            break;
        case SCISSORS:
            answer += to_string(ROCK);
            break;
        }
    }

    return answer;
}
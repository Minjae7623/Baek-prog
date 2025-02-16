#include <string>
#include <iostream>

using namespace std;

string solution(int age) {
    //1. 문자열로 받는다.
    string str = to_string(age);
    string answer = "";

    //2.문자로 끊어 아스키 코드로 치환하여 출력한다. (보정값: +49)
    for (char c : str)
    {
        answer.push_back((int)c + 49);
    }

    return answer;
}
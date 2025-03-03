#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int i : arr)
    {
        //처음 만나는 값
        if (answer.empty() || i != *answer.rbegin())
        {
            answer.push_back(i);
        }
    }
    return answer;
}
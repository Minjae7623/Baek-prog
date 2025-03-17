#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_set>

using namespace std;

//4P1 ~ 4P4 순열

int solution(vector<string> babbling) {
    vector<string> ayaya = { "aya", "ye", "woo", "ma" };
    unordered_set<string> ayaSet;
    int answer = 0;

    sort(ayaya.begin(), ayaya.end());

    for (int r = 1; r <= 4; ++r) 
    {
        do
        {
            string str = "";
            for (int i=0; i<r; ++i)
            {
                str += ayaya[i];
            }
            ayaSet.insert(str);

        } while (next_permutation(ayaya.begin(), ayaya.end()));
    }

    for (const string& s : babbling)
    {
        if (ayaSet.find(s) != ayaSet.end())
            ++answer;
    }

    return answer;
}
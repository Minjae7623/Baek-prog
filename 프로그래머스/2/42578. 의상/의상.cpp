#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> cloType;

    for (const auto& clotheVec : clothes) 
    {
        ++cloType[clotheVec[1]];
    }

    for (const auto& count : cloType)
    {
        answer *= (count.second + 1);
    }

    return answer - 1;
}
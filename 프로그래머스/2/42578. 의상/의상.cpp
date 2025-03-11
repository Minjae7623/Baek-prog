#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// 집합의 조합: |A|*|B| 

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> cloType;

    for (const auto& clotheVec : clothes) 
    {
        ++cloType[clotheVec[1]];
    }

    // 0개인 경우를 고려하여 +1
    for (const auto& count : cloType)
    {
        answer *= (count.second + 1);
    }

    // 모든 종류가 0개인 경우를 제외하여 -1
    return answer - 1;
}
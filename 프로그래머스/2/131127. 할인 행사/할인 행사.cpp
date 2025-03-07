#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    vector<unordered_map<string, int>> mapDiscount(discount.size() - 9);
    unordered_map<string, int> mapWish;
    
    for (int i = 0; i < want.size(); ++i)
    {
        mapWish[want[i]] = number[i];
    }

    for (int i = 0; i <= discount.size() - 10; ++i)
    {
        
        for (int j = i; j < i + 10; ++j)
        {
            ++mapDiscount[i][discount[j]];
        }

        if (mapWish == mapDiscount[i])
            ++answer;
    }

    return answer;
}
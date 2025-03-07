#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    unordered_set<string> recordNumber;
    bool answer = true;

    for (string number : phone_book)
    {
        string temp = "";

        for (char c : number)
        {
            temp += c;

            if (recordNumber.end() != recordNumber.find(temp))
                return false;
        }
        recordNumber.insert(temp);
    }

    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for (int i = 0; i < myString.size(); ++i)
    {
        if ('a' <= myString[i] && 'l' > myString[i])
            myString[i] = 'l';
    }

    return myString;
}
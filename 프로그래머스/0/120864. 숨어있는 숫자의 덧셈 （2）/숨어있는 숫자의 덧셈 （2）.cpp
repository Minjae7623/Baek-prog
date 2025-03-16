#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;

    for (int i = 0; i < my_string.size(); ++i)
    {
        string num = "";

        while (isdigit(my_string[i]))
        {
            num.push_back(my_string[i++]);
            if (i >= my_string.size())
                break;
        }

        if(!num.empty())
            answer += stoi(num);
    }

    return answer;
}


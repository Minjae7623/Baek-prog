#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 2;
    int lLength = str1.size();
    int rLength = str2.size();

    for (int i = 0, j = 0; i < lLength; ++i)
    {
        if (lLength - i < rLength)
            return 2;

        if (str1[i] == str2[0])
        {
            string s = "";
            j = i;
            int loop = rLength;

            while (loop--)
            {
                s += str1[j++];
            }

            if (s == str2)
                return 1;
        }
    }

    return answer;
}
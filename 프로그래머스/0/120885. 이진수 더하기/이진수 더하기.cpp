#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int mx = max(bin1.size(), bin2.size());
    int mn = min(bin1.size(), bin2.size());
    int a = 0, b = 0;
    int cIn = 0, cOut = 0;
   
    while (mx--)
    {
        if (bin1.empty())
            a = 0;
        else
        {
            a = bin1.back() - '0';
            bin1.pop_back();
        }

        if(bin2.empty())
            b = 0;
        else
        {
            b = bin2.back() - '0';
            bin2.pop_back();
        }

        int sum = (a ^ b) ^ cOut;
        cOut = (a & b) | (cIn & (a ^ b));
        cIn = cOut;
        
        answer = to_string(sum) + answer;
    }

    if (cIn)
        answer = '1' + answer;

    return answer;
}

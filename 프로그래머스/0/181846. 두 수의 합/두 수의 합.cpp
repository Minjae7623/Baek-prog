#include <string>
#include <vector>
#include <deque>

using namespace std;

string solution(string a, string b) {
    deque<char> deque;
    
    int carry = 0;
    int j = a.size() - 1;
    int k = b.size() - 1;
    int loop = max(a.size(), b.size());

    for (int i = 0; i < loop; ++i, --j, --k)
    {
        int sum = carry + (a[j] - '0') + (b[k] - '0');
        carry = 0;
        if (sum / 10)
        {
            carry = 1;
            sum %= 10;
        }

        deque.push_front(sum + '0');

        if (j != k)
        {
            if (j == 0)
            {
                while (k--)
                {
                    int sum = carry + (b[k] - '0');
                    carry = 0;
                    if (sum / 10)
                    {
                        carry = 1;
                        sum %= 10;
                    }

                    deque.push_front(sum + '0');
                }
                break;
            }
            else if (k == 0)
            {
                while (j--)
                {
                    int sum = carry + (a[j] - '0');
                    carry = 0;
                    if (sum / 10)
                    {
                        carry = 1;
                        sum %= 10;
                    }

                    deque.push_front(sum + '0');
                }
                break;
            }
        }

    }

    if (carry)
        deque.push_front('1');

    string answer(deque.begin(), deque.end());
    return answer;
}
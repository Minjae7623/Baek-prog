#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;// min(l, r)
    int lMove = 100, rMove = 100;
    int size = A.size();

    if (A == B)
        return 0;

    for (int i = 1; i < size; ++i)//칸 이동
    {
        /*
        string tmp = "";  //오른쪽 -> 실수로 좌우 반전 됨.
        int j = i;
        */
        string tmp2 = ""; //왼쪽
        int k = size - i;

        int loop = 0;

        while(loop++ < size)
        {
            //tmp  += A[j++ % size]; 
            tmp2 += A[k++ % size];
        }
        /*
        if (tmp == B)
        {
            rMove = i;
            break;
        }
        */
        if (tmp2 == B)
        {
            answer = i;
            break;
        }
    }

    return answer;
}
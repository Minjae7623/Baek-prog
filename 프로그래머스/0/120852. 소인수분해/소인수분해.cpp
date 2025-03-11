#include <string>
#include <vector>

using namespace std;

//에라토스테네스의 체

vector<int> solution(int n) {
    vector<int> answer;
    vector<bool>  isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
  
    for (int i = 2; i <= n; ++i) //i는 2부터 시작하여 모든 수를 소수라 가정
    {
        if (isPrime[i])
        {
            if (n % i == 0) //약수
                answer.push_back(i);

            for (int j = i * i; j <= n; j += i) //소수 i의 배수는 합성수
            {
                isPrime[j] = false;
            }
        }
    }

    return answer;
}
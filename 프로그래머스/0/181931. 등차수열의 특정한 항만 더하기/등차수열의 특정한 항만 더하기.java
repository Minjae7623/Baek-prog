class Solution {
    public int solution(int a, int d, boolean[] included) {
        int j = a;
        int answer = 0;

        for (boolean i : included) {
            if (i)
                answer += j;
            j += d;
        }
        return answer;
    }
}
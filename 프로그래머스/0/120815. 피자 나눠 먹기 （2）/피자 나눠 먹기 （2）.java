class Solution {
    public static int solution(int n) {
        return n / getGcd(n, 6);
    }

    public static int getGcd(int num1, int num2) {
        if (num1 % num2 == 0) {
            return num2;
        }
        return getGcd(num2, num1 % num2);
    }
}
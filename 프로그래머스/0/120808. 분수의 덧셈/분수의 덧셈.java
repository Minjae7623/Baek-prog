class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int numer = (numer1 * denom2) + (numer2 * denom1), denom = denom1 * denom2;
        int[] answer = new int[2];
        int gcd = getGcd(numer, denom);
 
        answer[0] = numer / gcd;
        answer[1] = denom / gcd;

        return answer;
    }
    
    public static int getGcd(int num1, int num2){
        if(num1 % num2 == 0)
            return num2;
        
        return getGcd(num2, num1 % num2);
    }
}
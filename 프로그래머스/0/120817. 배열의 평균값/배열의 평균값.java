import java.util.Arrays;

class Solution {
    public static double solution(int[] numbers) {

        return Arrays.stream(numbers).average().getAsDouble();
    }
}
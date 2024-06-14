import java.util.Arrays;

class Solution {
    public static int[] solution(int[] arr) {
        int size = 0;

        while (arr.length > Math.pow(2, size))
            size++;

        size = (int) Math.pow(2, size);

        int[] answer = {};
        answer = Arrays.copyOf(arr, size);

        return answer;
    }
}
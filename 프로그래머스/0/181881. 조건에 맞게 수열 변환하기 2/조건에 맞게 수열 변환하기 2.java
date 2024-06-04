import java.util.Arrays;

class Solution {
    public static int solution(int[] arr) {
        int[] answer = Arrays.copyOf(arr, arr.length);
        int[] answer2 = new int[arr.length];
        int j = 0;

        while (!Arrays.equals(answer2, answer)) {
            answer2 = Arrays.copyOf(answer, answer.length);

            for (int i = 0; i < arr.length; i++) {
                if (answer[i] >= 50 && answer[i] % 2 == 0)
                    answer[i] = answer[i] / 2;
                else if (answer[i] < 50 && answer[i] % 2 == 1)
                    answer[i] = answer[i] * 2 + 1;
            }

            j++;
        }

        return j - 1;
    }
}
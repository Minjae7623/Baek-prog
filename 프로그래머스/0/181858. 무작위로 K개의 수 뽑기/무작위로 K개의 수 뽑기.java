import java.util.Arrays;

class Solution {
    public static int[] solution(int[] arr, int k) {
        int[] answer = new int[k];
        Arrays.fill(answer, -1);
        arr = Arrays.stream(arr).distinct().toArray();

        if (arr.length > k)
            answer = Arrays.copyOfRange(arr, 0, k);
        else
            System.arraycopy(arr, 0, answer, 0, arr.length);

        return answer;
    }
}
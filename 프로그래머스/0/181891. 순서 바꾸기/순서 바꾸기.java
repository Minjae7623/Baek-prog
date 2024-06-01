import java.util.Arrays;

class Solution {
    public static int[] solution(int[] num_list, int n) {
        int[] answer = new int[num_list.length];
        int[] a = Arrays.copyOfRange(num_list, 0, n);

        System.arraycopy(num_list, n, answer, 0, num_list.length - n);
        System.arraycopy(a, 0, answer, num_list.length - n, n);

        return answer;
    }
}
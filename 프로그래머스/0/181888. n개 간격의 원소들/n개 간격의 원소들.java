import java.util.Arrays;

class Solution {
    public static int[] solution(int[] num_list, int n) {
        int[] answer = new int[num_list.length];
        int j =0;

        for(int i = 0; i < num_list.length; i += n)
            answer[j++] = num_list[i];

        return Arrays.copyOfRange(answer, 0, j);
    }
}
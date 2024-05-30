import java.util.Arrays;
import java.util.Collections;

class Solution {
    public static String solution(String my_string, int[] indices) {
        StringBuilder answer = new StringBuilder(my_string);
        int [] arr = Arrays.stream(indices).boxed().sorted(Collections.reverseOrder()).mapToInt(Integer :: intValue).toArray();

        for(int i : arr)
            answer.deleteCharAt(i);

        return answer.toString();
    }
}
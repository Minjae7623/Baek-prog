import java.util.Arrays;
import java.util.Collections;

class Solution {
    public static String solution(String my_string, int[] indices) {
        StringBuilder answer = new StringBuilder(my_string);
        indices = Arrays.stream(indices).boxed().sorted(Collections.reverseOrder()).mapToInt(Integer :: intValue).toArray();

        for(int i : indices)
            answer.deleteCharAt(i);

        return answer.toString();
    }
}
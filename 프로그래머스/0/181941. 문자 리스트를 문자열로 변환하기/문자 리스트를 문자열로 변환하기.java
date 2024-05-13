import java.util.Arrays;
import java.util.stream.Collectors;

class Solution {
    public static String solution(String[] arr) {
        return Arrays.stream(arr).collect(Collectors.joining()).toString();
    }
}

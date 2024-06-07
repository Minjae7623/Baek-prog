import java.util.Arrays;

class Solution {
    public String[] solution(String myString) {
        String[] arr = Arrays.stream(myString.split("x")).filter(str -> !str.isEmpty()).toArray(String[]::new);
        Arrays.sort(arr);
        return arr;
    }
}
import java.util.Arrays;

class Solution {
    public String[] solution(String myString) {
        String str = myString.replace("x", " ");
        String[] answer = str.trim().split("\\s+");
        Arrays.sort(answer);

        return answer;
    }
}
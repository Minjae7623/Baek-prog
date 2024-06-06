class Solution {
    public String solution(String myString) {
        String answer = "";

        for (char c : myString.toCharArray())
            answer += c == 'a' || c == 'A' ? Character.toUpperCase(c) : Character.toLowerCase(c);

        return answer;
    }
}
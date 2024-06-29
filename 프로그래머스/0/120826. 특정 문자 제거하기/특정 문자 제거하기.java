class Solution {
    public String solution(String my_string, String letter) {
        StringBuilder answer = new StringBuilder();
        String[] arr = my_string.split("");

        for (String s : arr)
            if (!s.equals(letter))
                answer.append(s);

        return answer.toString();
    }
}
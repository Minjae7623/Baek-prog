class Solution {
    public int solution(String binomial) {
        int answer = 0;
        String[] arr = binomial.split(" ");

        answer = switch (arr[1]) {
            case "+" -> Integer.parseInt(arr[0]) + Integer.parseInt(arr[2]);
            case "-" -> Integer.parseInt(arr[0]) - Integer.parseInt(arr[2]);
            case "*" -> Integer.parseInt(arr[0]) * Integer.parseInt(arr[2]);
            default -> answer;
        };

        return answer;
    }
}
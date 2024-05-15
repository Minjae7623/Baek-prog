class Solution {
    public static String solution(int[] numLog) {
        StringBuilder answer = new StringBuilder();

        for (int i = 1; i < numLog.length; i++) {
            int j = i - 1;

            if (numLog[j] + 1 == numLog[i]) answer.append("w");
            if (numLog[j] - 1 == numLog[i]) answer.append("s");
            if (numLog[j] + 10 == numLog[i]) answer.append("d");
            if (numLog[j] - 10 == numLog[i]) answer.append("a");
        }
        return answer.toString();
    }

    public static void main(String[] args) {
        System.out.println(solution(new int[] {0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1}));
    }
}
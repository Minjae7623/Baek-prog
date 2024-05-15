class Solution {
    public static String solution(int[] numLog) {
        StringBuilder answer = new StringBuilder();

        for (int i = 1; i < numLog.length; i++) {
            int j = i - 1;

            if (numLog[j] + 1 == numLog[i]) answer.append("w");
            else if (numLog[j] - 1 == numLog[i]) answer.append("s");
            else if (numLog[j] + 10 == numLog[i]) answer.append("d");
            else if (numLog[j] - 10 == numLog[i]) answer.append("a");
        }
        return answer.toString();
    }
}
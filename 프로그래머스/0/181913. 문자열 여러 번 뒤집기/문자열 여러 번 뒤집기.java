class Solution {
    public static String solution(String my_string, int[][] queries) {
        StringBuilder sb = new StringBuilder(my_string);
        String answer = "";

        for (int[] qury : queries) {
            int s = qury[0], e = qury[1];

            StringBuilder front = new StringBuilder(sb.substring(0, s));
            StringBuilder back = new StringBuilder(sb.substring(e + 1));
            StringBuilder center = new StringBuilder();

            for (int i = e; i >= s; i--) {
                center.append(sb.charAt(i));
            }
            sb.setLength(0);
            sb.append(front.append(center.append(back)));
        }

        return answer = sb.toString();
    }
}
class Solution {
    public static String solution(String my_string, int[] index_list) {
        char [] answer = new char [index_list.length];
        char [] str = my_string.toCharArray();
        int j = 0;

        for(int i : index_list)
         answer[j++] = str[i];

        return String.valueOf(answer);
    }

    public static void main(String[] args) {
        System.out.println(solution("cvsgiorszzzmrpaqpe", new int [] {16, 6, 5, 3, 12, 14, 11, 11, 17, 12, 7}));
    }
}
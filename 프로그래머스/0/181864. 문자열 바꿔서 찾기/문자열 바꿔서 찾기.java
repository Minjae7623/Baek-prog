class Solution {
    public int solution(String myString, String pat) {
        StringBuilder str = new StringBuilder();

        for (char c : myString.toCharArray())
            str.append(c == 'A' ? "B" : "A");

        boolean ch = str.toString().contains(pat);

        return ch ? 1 : 0;
    }
}
import java.util.HashMap;

class Solution {
    public static String solution(int age) {
        HashMap<Integer, String> mapping = new HashMap<>();

        mapping.put(0, "a");
        mapping.put(1, "b");
        mapping.put(2, "c");
        mapping.put(3, "d");
        mapping.put(4, "e");
        mapping.put(5, "f");
        mapping.put(6, "g");
        mapping.put(7, "h");
        mapping.put(8, "i");
        mapping.put(9, "j");

        if (age < 10) { //1자릿수인 경우
            return mapping.get(age);
        } else if (age < 100) { //2
            int carry = age / 10;
            int remainder = age % 10;

            return mapping.get(carry) + mapping.get(remainder);
        } else if (age < 1000) { //3
            int carry2 = age / 100;
            int remainder = age % 100;
            int carry1 = remainder / 10;
            remainder = remainder % 10;

            return mapping.get(carry2) + mapping.get(carry1) + mapping.get(remainder);
        } else {// 1000
            return "baaa";
        }
    }

}
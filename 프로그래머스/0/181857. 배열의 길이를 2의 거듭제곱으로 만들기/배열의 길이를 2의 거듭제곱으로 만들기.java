import java.util.Arrays;

class Solution {
    public static int[] solution(int[] arr) {
        int size = 1;

        while (arr.length > size)
            size *= 2;

        return Arrays.copyOf(arr, size);
    }
}
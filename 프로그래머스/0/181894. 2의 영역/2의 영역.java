import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

class Solution {

    public static int[] solution(int[] arr) {
        ArrayList<Integer> answer = new ArrayList<>();
        List<Integer> list = Arrays.stream(arr).boxed().collect(Collectors.toList());
        int count = Collections.frequency(list, 2);

        if (count == 0)
            return new int[]{-1};
        else if (count == 1)
            return new int[]{2};
        else if (count >= 2)
            for (int i = list.indexOf(2), j = 0; i <= list.lastIndexOf(2); i++)
                answer.add(arr[i]);

        return answer.stream().mapToInt(i->i).toArray();
    }
}
import java.util.ArrayList;

class Solution {

    public int[] solution(int[] arr, int[][] intervals) {
        ArrayList<Integer> answer = new ArrayList<>();

        for(int [] val : intervals){
            int start = val[0], end = val[1];

            for(int i = start; i <= end; i++)
                answer.add(arr[i]);
        }
        
        return answer.stream().mapToInt(i->i).toArray();
    }
}
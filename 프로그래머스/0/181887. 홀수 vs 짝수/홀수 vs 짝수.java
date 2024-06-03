class Solution {
    public int solution(int[] num_list) {
        int oSum = 0, eSum = 0;
        
        for(int i = 0; i < num_list.length; i++){
            if(i % 2 == 0)
                eSum += num_list[i];
            else 
                oSum += num_list[i];
        }
        
        return Math.max(eSum, oSum);
    }
}
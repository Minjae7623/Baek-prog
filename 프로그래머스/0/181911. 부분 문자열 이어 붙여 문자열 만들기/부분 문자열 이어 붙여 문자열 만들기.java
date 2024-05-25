class Solution {
    public static String solution(String[] my_strings, int[][] parts) {
        int i = 0;
        StringBuilder sb = new StringBuilder();
        
        for(int [] part : parts){
            int s = part[0], e = part[1];
            String str = my_strings[i++];
            
            sb.append(str.substring(s, e + 1));
        }
      
        return sb.toString();
    }
}
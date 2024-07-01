class Solution {
    public int solution(int n, int k) {
        int discount = n / 10;
        
        return (n * 12000) + ((k - discount) * 2000);
    }
}
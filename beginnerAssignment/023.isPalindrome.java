class Solution {
    public boolean isPalindrome(int x) {
        int y=0, temp=x;
        while(x>0){
            y=(y*10)+(x%10);
            x/=10;
        }
        return temp==y;
    }
}
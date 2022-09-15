import java.math.BigInteger;
class Solution {
    public int myAtoi(String s) {
        s = s.trim();
        boolean isPositive = true;
        boolean iterationStarted = false;

        BigInteger ans = new BigInteger("0");
        
        for(char e:s.toCharArray())
        {
            if(iterationStarted == true && (e == '+' || e == '-'))
                break;
            else if(e == '+')
            {
                isPositive = true;
            }
            else if(e == '-')
            {
                isPositive = false;
            }
            else if(e>='0' && e<='9')
            {
                ans = ans.multiply(BigInteger.valueOf(10)).add(BigInteger.valueOf(e-'0'));
            }
            else if(e == ' ' || e == '.' || Character.isLowerCase(e) || Character.isUpperCase(e))
            {
                break;
            }
            iterationStarted = true;
        }
        if(!isPositive)
            ans = ans.multiply(BigInteger.valueOf(-1));
        if(ans.compareTo(BigInteger.valueOf(Integer.MAX_VALUE)) == 1)
            return Integer.MAX_VALUE;
        if(ans.compareTo(BigInteger.valueOf(Integer.MIN_VALUE)) == -1)
            return Integer.MIN_VALUE;
        
        return ans.intValue();
    }
}
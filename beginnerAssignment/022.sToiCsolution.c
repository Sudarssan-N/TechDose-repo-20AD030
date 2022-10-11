int myAtoi(char * s){
    int i = 0;
    long int ans = 0;
    int flag = 0;
    
    while(s[i] == ' ')
        i += 1;
    
    if(s[i] == '+')
    {
        flag ^= 1;
        i += 1;
    }
    if(s[i] == '-')
    {
        flag ^= 2;
        i += 1;
    }
    if(flag == 3)
        return 0;
    
    while(s[i] >= '0' && s[i] <= '9')
    {
        ans *= 10;
        ans += s[i] - '0';
        
        if(ans > INT_MAX)
        {
            if(flag == 2)
                return INT_MIN;
            
            return INT_MAX;
        }
        
        i += 1;
    }
    
    if(flag == 2)
        return -1*ans;
    
    return ans;
}
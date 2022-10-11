int mySqrt(int x){
    int low=0,high=x,mid;
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    while(high-low>1){
            mid = low + (high-low)/2;
            if(mid > x/mid)
                    high = mid;
            else if(mid <= x/mid)
                    low = mid;
    }
    return low;
}
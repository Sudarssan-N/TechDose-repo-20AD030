class Solution {
    public int subarrayGCD(int[] nums, int k) {
        int count=0;
        for(int i=0;i<nums.length;i++){
            for(int j=i;j<nums.length;j++){
                int ret=toFind(nums,i,j);
                if(ret==k)
                    count++;
                if(ret%k!=0)
                    break;
            }
        }
        return count;
    }
    public static int toFind(int[] arr,int x,int y){
        int gcd=arr[x];
        for(int i=x;i<=y;i++){
            gcd=GCD(gcd,arr[i]);
        }
        return gcd;
    }
    public static int GCD(int x,int y){
        if(y==0)
            return x;
		return GCD(y,(x%y));
    }
}




class Solution {
public:
    int gcd(int a, int b){
        if(b==0) return a;
        return gcd(b,a%b );
    }
    
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size(),s,temp;
        int cnt=0;
        vector<int> g;
        for(int i=0;i<n;i++){
            g.clear();
            g.push_back(nums[i]);
            for(int j=i;j<n;j++){
                s = g.size()-1;
                temp = g[s];
                g.push_back(gcd(temp,nums[j]));
                if(g.back()==k) cnt++;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    bool isvalid(long long  sum,long long x){
        long long lastd=sum%10;
           long long frstd=sum;
            while(frstd>=10){
                frstd/=10;
            }
        return frstd==x&&lastd==x;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
       long long n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
              sum+=nums[j]; 
                if(isvalid(sum,x)){
                    ans++;
                }
            }
           
        }
        return ans;
        
    }
};
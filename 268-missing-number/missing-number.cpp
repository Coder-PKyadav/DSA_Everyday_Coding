class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=0;
        int e=n-1;
        int missingidx=n;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==mid){
                 s=mid+1;
            }else if(nums[mid]>mid){
                missingidx=mid;
                e=mid-1;
            }

        }
        return missingidx;
        
    }
};
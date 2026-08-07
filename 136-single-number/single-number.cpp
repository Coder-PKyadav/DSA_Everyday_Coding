class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
            
        }
        int z=0;
       for(auto &it: mp){
         if(it.second==1){
            z= it.first;
         }
       }
      return z;  
    }
};
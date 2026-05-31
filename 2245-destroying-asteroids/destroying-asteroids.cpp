class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
       sort(begin(asteroids),end(asteroids));
       for(int &m:asteroids){
        if(mass>1e5) return true;
        else if(mass<m) return false;
       mass+=m;
      
       }
        return true;
    }
};
class MyHashMap {
public:
int arr[10000001];
    MyHashMap() {
       memset(arr,-1,sizeof(arr)); 
    }
    
    void put(int key, int value) {
     arr[key]=value;
        
    }
    
    int get(int key) {
      return arr[key];  
    }
    
    void remove(int key) {
        arr[key]=-1;
    }
};


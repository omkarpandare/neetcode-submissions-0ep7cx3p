class MyHashMap {
public:
    vector<int>mp;
    vector<bool>present;
    MyHashMap() {

        mp.resize(10000001,0);
        present.resize(10100001,false);
        
    }
    
    void put(int key, int value) {
        mp[key]=value;  
        present[key]=true;             
    }
    
    int get(int key) {
        if(!present[key]) return -1;
        else return mp[key];        
    }
    
    void remove(int key) {
        mp[key]=0;
        present[key]=false;       
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
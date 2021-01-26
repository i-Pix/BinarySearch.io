class CustomSet {
    public:    
    set<int> s;
    CustomSet() {
    
    }

    void add(int val) {
        s.insert(val);
    }

    bool exists(int val) {
        if(s.count(val))
        return true;
        else return false;
    }

    void remove(int val) {
        s.erase(val);
    }
};

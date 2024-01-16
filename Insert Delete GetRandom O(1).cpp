class RandomizedSet {
public:
    unordered_map<int, int> pos;
    vector<int> values;

    RandomizedSet() {

    }
    
    bool insert(int val) {
        if(pos.find(val) != pos.end())
            return 0;

        pos[val] = values.size();
        values.push_back(val);

        return 1;    
    }
    
    bool remove(int val) {
        if(pos.find(val) == pos.end())
            return 0;

        int p1 = pos[val];
        int p2 = values.size() - 1;

        swap(values[p1], values[p2]);
        values.pop_back();

        pos[values[p1]] = p1;

        pos.erase(val);

        return 1;
    }
    
    int getRandom() {
        return values[rand() % values.size()];
    }
};

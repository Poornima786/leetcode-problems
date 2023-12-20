lass Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mina, minb;
        mina = minb = 1e9;
        
        for(auto i : prices){
            if(i < mina){
                minb = mina;
                mina = i;
            }
            else if(i < minb){
                minb = i;
            }
        }
        
        return (money - (mina + minb) > -1) ? money - (mina + minb) : money;
    }
};

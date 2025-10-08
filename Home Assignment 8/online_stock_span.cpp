class StockSpanner {

stack<pair<int,int>> st;
    

public:
    StockSpanner() {
        while (!st.empty()) {
            st.pop();
        }
    }
    
    int next(int price) {
        
        int curSpan = 1;

        while(!st.empty()){

            int top = st.top().first;
            int prevSpan = st.top().second;

            if(top <= price){
                curSpan += prevSpan;
                st.pop();
            }else{
                break;
            }

        }

        st.push(make_pair(price,curSpan));
        return curSpan;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
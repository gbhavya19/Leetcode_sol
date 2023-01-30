class StockSpanner {
public:
    stack<pair<int,int>> sta;
    StockSpanner() {
    }
    
    int next(int price) {
        int count=0;
        while(sta.size() && sta.top().first<=price){
            count+=sta.top().second;
            sta.pop();
        }
        sta.push({price,count+1});
        return count+1;
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 
 */

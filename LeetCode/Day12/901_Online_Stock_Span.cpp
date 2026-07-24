#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while(!st.empty() && st.top().first <= price){
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

int main(){
    StockSpanner* obj = new StockSpanner();
    cout<<obj->next(100)<<endl;
    cout<<obj->next(80)<<endl;
    cout<<obj->next(60)<<endl;
    cout<<obj->next(70)<<endl;
    cout<<obj->next(60)<<endl;
    cout<<obj->next(75)<<endl;
    cout<<obj->next(85)<<endl;
}
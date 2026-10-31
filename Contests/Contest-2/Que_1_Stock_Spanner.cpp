#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class StockSpanner {
private:
    // Stack stores pairs of {price, span}
    stack<pair<int, int>> st;

public:
    StockSpanner() {}

    int next(int price) {
        int span = 1;

        // Pop elements smaller than or equal to current price
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        st.push({price, span});
        return span;
    }
};

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    StockSpanner spanner;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        cout << spanner.next(price) << (i + 1 == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class StockSpanner
{
private:
    // Stores {price, span}
    stack<pair<int, int>> st;

public:
    StockSpanner() {}

    int next(int price)
    {
        // Current day ka span minimum 1 hoga
        int span = 1;

        // Previous prices jo current price se smaller
        // ya equal hain, unhe stack se remove karo
        while (!st.empty() && st.top().first <= price)
        {
            // Popped element ka span current span mein add karo
            span += st.top().second;
            st.pop();
        }

        // Current price aur calculated span store karo
        st.push({price, span});

        // Current day's span return karo
        return span;
    }
};

int main()
{
    StockSpanner obj;

    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices for " << n << " days:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << "\nStock Span for each day:\n";

    for (int i = 0; i < n; i++)
    {
        cout << obj.next(prices[i]) << " ";
    }

    cout << endl;

    return 0;
}

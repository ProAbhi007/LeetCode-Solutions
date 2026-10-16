class StockSpanner {
    int price[10001], span[10001], top;
public:
    StockSpanner() : top(0) {}

    int next(int p) {
        int s = 1;
        while (top > 0 && price[top - 1] <= p) s += span[--top];
        price[top] = p;
        span[top] = s;
        top++;
        return s;
    }
};

static const int fastIO = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
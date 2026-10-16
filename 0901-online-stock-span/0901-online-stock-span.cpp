class StockSpanner {
    int price[10001], span[10001], n;
public:
    StockSpanner() : n(0) {}

    int next(int p) {
        int s = 1;
        while (n - s >= 0 && price[n - s] <= p) s += span[n - s];
        price[n] = p;
        span[n] = s;
        n++;
        return s;
    }
};
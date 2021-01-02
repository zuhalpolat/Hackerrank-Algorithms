// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {

    int bars = n / c;
    int wrapper = bars;
    int freeBar = 0;

    while (wrapper >= m) {

        freeBar = wrapper / m;
        wrapper = (wrapper % m) + freeBar;
        bars += freeBar;
    }

    return bars;
}
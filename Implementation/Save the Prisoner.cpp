// Complete the saveThePrisoner function below.
int saveThePrisoner(int n, int m, int s) {

    int diff = (n - s) + 1;

    if (diff >= m) {
        return s - 1 + m;
    }
    else {
        m -= diff;
        return (m % n == 0) ? n : m % n;
    }
}
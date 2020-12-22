// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {

    int pairs[101] = { 0 };
    int sum = 0;

    for (int i = 0; i < ar.size(); i++) {
        pairs[ar[i]]++;
    }

    for (int i = 0; i < 101; i++) {

        sum += pairs[i] / 2;
    }

    return sum;
}
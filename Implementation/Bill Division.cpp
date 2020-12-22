// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {

    int sum = 0;
    for (int i = 0; i < bill.size(); i++) {
        sum += bill[i];
    }

    sum -= bill[k];
    int actual = sum / 2;

    if (actual == b)
        cout << "Bon Appetit" << endl;
    else
        cout << b - (sum / 2) << endl;
}
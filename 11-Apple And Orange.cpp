// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    int appleRange = 0, orangeRange = 0;

    for (int i = 0; i < apples.size(); i++) {
        apples[i] += a;

        if (apples[i] >= s && apples[i] <= t)
            appleRange++;
    }

    for (int i = 0; i < oranges.size(); i++) {
        oranges[i] += b;

        if (oranges[i] >= s && oranges[i] <= t)
            orangeRange++;
    }

    cout << appleRange << endl;
    cout << orangeRange << endl;
}
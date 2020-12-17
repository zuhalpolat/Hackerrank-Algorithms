// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {

    vector<int> sumOfArrays = { 0, 0 };

    for (int i = 0; i < a.size(); i++) {

        if (a[i] > b[i])
            sumOfArrays[0]++;
        else if (b[i] > a[i])
            sumOfArrays[1]++;
    }

    return sumOfArrays;
}
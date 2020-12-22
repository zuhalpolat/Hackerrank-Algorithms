// Complete the circularArrayRotation function below.
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {

    vector<int> ar(a.size(), 0);
    vector<int> result;

    for (int i = 0; i < a.size(); i++) {
        ar[(i + k) % a.size()] = a[i];
    }

    for (int i = 0; i < queries.size(); i++) {
        result.push_back(ar[queries[i]]);
    }

    return result;
}
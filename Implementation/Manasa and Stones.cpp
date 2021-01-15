// Complete the stones function below.
vector<int> stones(int n, int a, int b) {

    set<int> numbers;
    vector<int> result;
    set<int>::iterator itr;

    for (int i = 0; i < n; i++) {
        int sum = (a * i) + (n - 1 - i) * b;
        numbers.insert(sum);
    }

    for (itr = numbers.begin(); itr != numbers.end(); ++itr)
        result.push_back(*itr);

    return result;
}
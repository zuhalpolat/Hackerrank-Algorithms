// Complete the permutationEquation function below.
vector<int> permutationEquation(vector<int> p) {

    vector<int> result;
    unordered_map<int, int> map;

    for (int i = 0; i < p.size(); i++) {
        map[p[i]] = i + 1;
    }

    for (int i = 1; i <= p.size(); i++) {
        result.push_back(map[map[i]]);
    }

    return result;
}
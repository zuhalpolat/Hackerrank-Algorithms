// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {

    vector<string> results;
    unordered_map<char, int> umap;
    unordered_map<int, string> numbers;

    for (int i = 0; i < queries.size(); i++) {
        numbers[queries[i]] = "No";
    }

    for (int i = 0; i < s.size(); i++) {

        if (umap.count(s[i]) == 0)
            umap[s[i]] = int(s[i]) - 96;
        else if (s[i] == s[i - 1])
            umap[s[i]] += int(s[i]) - 96;
        else
            umap[s[i]] = int(s[i]) - 96;

        if (numbers.count(umap[s[i]]) > 0)
            numbers[umap[s[i]]] = "Yes";
    }

    for (int i = 0; i < queries.size(); i++) {
        results.push_back(numbers[queries[i]]);
    }

    return results;
}
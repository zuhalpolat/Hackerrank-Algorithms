// Complete the gemstones function below.
int gemstones(vector<string> arr) {

    unordered_map<char, int> repeats;
    int res = 0;

    for (int i = 0; i < arr.size(); i++) {

        sort(arr[i].begin(), arr[i].end());
        arr[i].erase(unique(arr[i].begin(), arr[i].end()), arr[i].end());

        for (int j = 0; j < arr[i].size(); j++) {

            if (repeats.count(arr[i].at(j)) > 0)
                repeats[arr[i].at(j)]++;
            else
                repeats[arr[i].at(j)] = 1;
        }
    }

    for (auto x : repeats) {
        if (x.second == arr.size())
            res++;
    }
    return res;
}
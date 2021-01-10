// Complete the icecreamParlor function below.
vector<int> icecreamParlor(int m, vector<int> arr) {

    vector<int> result(2);

    for (int i = 0; i < arr.size(); i++) {

        for (int j = i + 1; j < arr.size(); j++) {

            if (arr[i] + arr[j] == m) {
                result[0] = i + 1;
                result[1] = j + 1;
                return result;
            }
        }
    }

    return result;
}
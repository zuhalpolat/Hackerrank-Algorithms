// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {

    vector<int> sizes;

    while (arr.size() > 0) {

        sizes.push_back(arr.size());

        int min = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            if (arr[i] < min) {
                min = arr[i];
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] -= min;
        }

        arr.erase(std::remove(arr.begin(), arr.end(), 0), arr.end());
    }

    return sizes;
}
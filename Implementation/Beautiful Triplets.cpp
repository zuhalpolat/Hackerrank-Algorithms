// Complete the beautifulTriplets function below.
int beautifulTriplets(int d, vector<int> arr) {

    map<int, int> numbers;
    map<int, int>::iterator itr;
    int triplets = 0, max;

    for (int i = 0; i < arr.size(); i++) {

        if (numbers.count(arr[i]) == 0)
            numbers.insert(pair<int, int>(arr[i], 1));
        else
            numbers[arr[i]]++;
    }

    for (itr = numbers.begin(); itr != numbers.end(); ++itr) {

        int first = itr->first;
        int value = itr->second;

        if (numbers.count(first + d) == 1 && numbers.count(first + d * 2) == 1) {

            max = std::max(value, numbers[first + d]);
            max = std::max(max, numbers[first + d * 2]);
            triplets += max;
        }
    }

    return triplets;
}
vector<int> absolutePermutation(int n, int k) {

    vector<int> arr;
    vector<int> no = { -1 };
    int i = 1, temp;

    if (k == 0) {

        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
        }
    }
    else {
        while (i <= n) {

            temp = i;

            for (int j = 1; j <= k; j++) {
                arr.push_back(k + i++);

                if (k + i > n)
                    break;
            }

            for (int j = 0; j < k; j++) {
                arr.push_back(temp + j);
                i++;
            }
        }
    }

    for (int i = 1; i < n; i++) {

        if (abs(arr[i - 1] - i) != abs(arr[i] - (i + 1))) {
            arr.clear();
            arr.push_back(-1);
            return arr;
        }
    }

    return arr;
}
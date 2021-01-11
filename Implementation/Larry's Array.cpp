int countInversion(vector<int> arr) {

    int inversion = 0, temp;

    for (int i = 0; i < arr.size(); i++) {

        for (int j = 0; j < arr.size() - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                inversion++;
            }
        }
    }
    return inversion;
}

// Complete the larrysArray function below.
string larrysArray(vector<int> A) {

    return (countInversion(A) % 2 == 0) ? "YES" : "NO";
}
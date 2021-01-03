// Complete the workbook function below.
int workbook(int n, int k, vector<int> arr) {

    int page = 1, start, end, total, special = 0;

    for (int i = 0; i < n; i++) {

        total = ceil((double)arr[i] / (double)k);

        int j = 1;
        start = 1;
        end = (arr[i] >= k) ? k : arr[i];

        while (j <= total) {

            if (page >= start && page <= end) {
                special++;
            }

            page++;
            start = end + 1;
            end = (end + k <= arr[i]) ? end + k : arr[i];
            j++;
        }
    }

    return special;
}
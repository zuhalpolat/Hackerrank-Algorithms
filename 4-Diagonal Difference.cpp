/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {

    int sumLeft = 0, sumRight = 0;

    for (int i = 0; i < arr.size(); i++) {

        sumLeft += arr[i][i];
        sumRight += arr[i][arr.size() - 1 - i];
    }

    return abs(sumLeft - sumRight);
}
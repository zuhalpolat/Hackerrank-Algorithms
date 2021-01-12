#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;


void printMatrix(vector<vector<int>> arr) {

    for (int i = 0; i < arr.size(); i++) {

        for (int j = 0; j < arr[0].size(); j++) {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Complete the matrixRotation function below.
void matrixRotation(vector<vector<int>> matrix, int r) {

    int row = matrix.size(), col = matrix[0].size();
    int rotation = std::min(row, col) / 2;

    for (int i = 0; i < rotation; i++) {

        vector<int> temp;

        for (int j = i; j < row - i; j++) {
            temp.push_back(matrix[j][i]);
        }

        for (int j = i + 1; j <= col - 2 - i; j++) {
            temp.push_back(matrix[row - 1 - i][j]);
        }

        for (int j = row - 1 - i; j >= i; j--) {
            temp.push_back(matrix[j][col - 1 - i]);
        }

        for (int j = col - 2 - i; j >= i + 1; j--) {
            temp.push_back(matrix[i][j]);
        }


        int jump = r % temp.size();
        vector<int> rotated;
        int start = temp.size() - jump;

        for (int j = start; j < temp.size(); j++) {

            rotated.push_back(temp[j]);
        }

        for (int j = 0; j < start; j++) {

            rotated.push_back(temp[j]);
        }

        int index = 0;

        for (int j = i; j < row - i; j++) {
            matrix[j][i] = rotated[index++];
        }

        for (int j = i + 1; j <= col - 2 - i; j++) {
            matrix[row - 1 - i][j] = rotated[index++];
        }

        for (int j = row - 1 - i; j >= i; j--) {
            matrix[j][col - 1 - i] = rotated[index++];
        }

        for (int j = col - 2 - i; j >= i + 1; j--) {
            matrix[i][j] = rotated[index++];
        }
    }
    printMatrix(matrix);

}


int main() {

    vector<vector<int>> arr = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };

    vector<vector<int>> arr2 = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20} };

    vector<vector<int>> arr3 = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20} };


    matrixRotation(arr, 7);

    system("pause");

}
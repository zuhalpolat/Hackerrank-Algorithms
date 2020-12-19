#include <iostream>
#include <vector>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {

    int magic_mat[8][3][3] =
    {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };

    int min_cost = 81;

    for (int k = 0; k < 8; k++) {
        int cost = 0;

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++)
            {
                cost += abs(s[i][j] - magic_mat[k][i][j]);

                cout << "s[i][j]: " << s[i][j] << endl;
                cout << "magic_mat[k][i][j]: " << magic_mat[k][i][j] << endl;
                cout << "abs(s[i][j] - magic_mat[k][i][j]): " << abs(s[i][j] - magic_mat[k][i][j]) << endl;
                cout << "Cost: " << cost << endl << endl;
            }
        }

        cout << endl << "min_cost: " << min_cost << endl;
        cout << "cost: " << cost << endl << endl << endl;

        if (cost < min_cost)
            min_cost = cost;
    }

    return min_cost;

}

int main()
{
    vector<vector<int>> s = { {4, 8, 2}, {4, 5, 7}, {6, 1, 6} };

    int result = formingMagicSquare(s);

    cout << result << "\n";

    return 0;

    system("pause");
}
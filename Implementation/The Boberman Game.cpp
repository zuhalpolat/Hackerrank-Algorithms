

vector<string> bombs(vector<string> grid, vector<string> res) {

    for (int i = 0; i < grid.size(); i++) {

        if (grid[i].find('O') != string::npos) {

            for (int j = 0; j < grid[i].size(); j++) {

                if (grid[i][j] == 'O') {

                    if (i > 0)
                        res[i - 1][j] = '.';
                    if (i < grid.size() - 1)
                        res[i + 1][j] = '.';
                    if (j > 0)
                        res[i][j - 1] = '.';
                    if (j < grid[i].size() - 1)
                        res[i][j + 1] = '.';
                    res[i][j] = '.';
                }
            }
        }
    }

    return res;
}

vector<string> bomberMan(int n, vector<string> grid) {

    string row = "";
    vector<string> res, temp;

    if (n == 1)
        return grid;

    for (int i = 0; i < grid[0].size(); i++)
        row += "O";

    for (int i = 0; i < grid.size(); i++) {
        res.push_back(row);
        temp.push_back(row);
    }

    if (n % 2 == 0)
        return res;

    res = bombs(grid, res);

    return (n % 4 == 3) ? res : bombs(res, temp);
}
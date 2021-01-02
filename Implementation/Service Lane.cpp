// Complete the serviceLane function below.
vector<int> serviceLane(int n, vector<int> width, vector<vector<int>> cases) {

    vector<int> vehicles;

    for (int i = 0; i < cases.size(); i++) {

        int min = INT_MAX;

        for (int j = cases[i][0]; j <= cases[i][1]; j++) {

            min = std::min(min, width[j]);
        }

        vehicles.push_back(min);
    }

    return vehicles;
}
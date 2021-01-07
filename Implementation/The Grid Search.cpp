// Complete the gridSearch function below.
string gridSearch(vector<string> G, vector<string> P) {

    int index;
    int count = 1;

    for (int i = 0; i <= G.size() - P.size(); i++) {

        if (G[i].find(P[0]) != std::string::npos) {

            for (int j = 0; j <= G[0].size() - P[0].size(); j++) {

                if (G[i].substr(j, P[0].size()) == P[0]) {

                    for (int k = 1; k < P.size(); k++) {

                        if (G[i + k].substr(j, P[k].size()) == P[k])
                            count++;
                    }

                    if (count == P.size())
                        return "YES";
                    else
                        count = 1;
                }
            }
        }
    }

    return "NO";
}
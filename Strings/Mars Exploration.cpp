// Complete the marsExploration function below.
int marsExploration(string s) {

    int diff = 0;

    for (int i = 0; i < s.size(); i += 3) {

        if (s[i] != 'S')
            diff++;
        if (s[i + 1] != 'O')
            diff++;
        if (s[i + 2] != 'S')
            diff++;
    }

    return diff;
}
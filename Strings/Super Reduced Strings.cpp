// Complete the superReducedString function below.
string superReducedString(string s) {

    for (int i = 1; i < s.length(); i++) {

        if (s[i] == s[i - 1]) {
            s.erase(i - 1, 2);
            i = 0;
        }
    }

    return (s == "") ? "Empty String" : s;
}
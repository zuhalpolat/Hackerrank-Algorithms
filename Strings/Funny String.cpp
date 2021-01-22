// Complete the funnyString function below.
string funnyString(string s) {

    for (int i = 0, j = s.size() - 1; i < s.size() - 1, j > 0; i++, j--) {

        if (abs(int(s[i]) - int(s[i + 1])) != abs(int(s[j]) - int(s[j - 1])))
            return "Not Funny";
    }
    return "Funny";
}
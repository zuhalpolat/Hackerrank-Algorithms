// Complete the camelcase function below.
int camelcase(string s) {

    if (s == "" || s.empty())
        return 0;

    int words = 1;

    for (int i = 0; i < s.size(); i++) {

        if (isupper(s[i]))
            words++;
    }

    return words;
}
// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {

    int res = 0;

    for (int i = 0; i < s.size() - 1; i++) {

        if (s[i] == s[i + 1])
            res++;
    }
    return res;
}
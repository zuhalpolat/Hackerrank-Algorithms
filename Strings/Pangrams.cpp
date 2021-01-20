// Complete the pangrams function below.
string pangrams(string s) {

    set<char> letters;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] != ' ')
            letters.insert(tolower(s[i]));
    }

    return (letters.size() == 26) ? "pangram" : "not pangram";
}
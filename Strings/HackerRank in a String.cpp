// Complete the hackerrankInString function below.
string hackerrankInString(string s) {

    string word = "hackerrank";
    int index = 0;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == word[index]) {
            index++;
        }

        if (index >= word.size())
            return "YES";
    }

    return "NO";
}
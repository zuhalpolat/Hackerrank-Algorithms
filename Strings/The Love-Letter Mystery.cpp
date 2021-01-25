// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {

    int change = 0, len = s.size();

    for (int i = 0; i < len / 2; i++) {

        cout << int(s[i]) << " " << int(s[len - i - 1]) << endl;

        if (int(s[i]) > int(s[len - i - 1])) {
            change += int(s[i]) - int(s[len - i - 1]);
        }
        else if (int(s[i]) < int(s[len - i - 1])) {
            change += int(s[len - i - 1]) - int(s[i]);
        }
    }
    cout << endl;
    return change;
}
// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {

    k = k % 26;

    for (int i = 0; i < s.size(); i++) {

        int val = (int)s[i];

        if (val >= 65 && val <= 90) {

            if (val + k > 90)
                val = 65 + (val + k - 90 - 1);
            else
                val += k;
        }
        else if (val >= 97 && val <= 122) {

            if (val + k > 122)
                val = 97 + (val + k - 122 - 1);
            else
                val += k;
        }
        s[i] = (char)val;
    }
    return s;
}
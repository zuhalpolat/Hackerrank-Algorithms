// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    long repeat = 0;

    if (s.size() >= n) {

        for (int i = 0; i < n; i++) {

            if (s[i] == 'a')
                repeat++;
        }
        return repeat;
    }

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == 'a')
            repeat++;
    }

    n -= s.size();
    int remain = n % s.size();
    n /= s.size();
    repeat += repeat * n;

    for (int i = 0; i < remain; i++) {
        if (s[i] == 'a')
            repeat++;
    }

    return repeat;
}
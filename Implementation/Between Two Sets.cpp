int getTotalX(vector<int> a, vector<int> b) {

    int num = 1;
    int count = 0;

    while (num <= 100) {

        int counta = 0;
        int countb = 0;

        for (int i = 0; i < a.size(); i++) {
            if (num % a[i] == 0) {
                counta++;
            }

        }
        for (int i = 0; i < b.size(); i++) {
            if (b[i] % num == 0) {
                countb++;
            }
        }
        if (counta == a.size() && countb == b.size())
            count++;

        num++;
    }
    return count;
}
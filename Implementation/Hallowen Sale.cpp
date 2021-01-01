// Complete the howManyGames function below.
int howManyGames(int p, int d, int m, int s) {

    int diff = (p - m) / d;
    diff = (p - m) % d == 0 ? diff-- : diff;

    int games = 0;
    int price = p;

    while (s >= price) {

        s -= price;
        games++;

        if (price - d < m)
            price = m;
        else
            price -= d;
    }

    return games;
}
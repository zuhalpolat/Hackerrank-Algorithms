// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {

    int i = 0, point = 100;

    while (true) {

        i = (i + k) % c.size();

        if (c[i] == 1)
            point -= 3;
        else
            point -= 1;

        if (i == 0)
            break;
    }

    return point;
}
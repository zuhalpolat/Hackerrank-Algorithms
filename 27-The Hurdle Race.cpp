// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height) {

    int max = height[0];

    for (int i = 1; i < height.size(); i++) {

        if (height[i] > max)
            max = height[i];
    }

    return max - k >= 0 ? max - k : 0;
}
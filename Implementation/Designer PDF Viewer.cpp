// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word) {

    int heights[26] = { 0 };

    for (int i = 0; i < word.size(); i++) {
        int code = word.at(i) - 97;
        heights[code] = h[code];
    }

    int max = 0;

    for (int i = 0; i < 26; i++) {
        if (heights[i] > max)
            max = heights[i];
    }

    return max * word.size();
}
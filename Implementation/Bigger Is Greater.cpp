// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {

    return (next_permutation(w.begin(), w.end())) ? w : "no answer";

}
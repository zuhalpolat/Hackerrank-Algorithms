// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {

    int tempL, length, first, second, number = 0;;
    long square;
    string stemp;

    for (int i = p; i <= q; i++) {

        tempL = to_string(i).length();
        square = (long)pow(i, 2);
        length = to_string(square).length();

        stemp = to_string(square);
        if (length > 1) {
            second = stoi(stemp.substr(length - tempL));
            first = stoi(stemp.substr(0, length - tempL));

            if (second + first == i) {
                cout << i << " ";
                number++;
            }
        }
        else if (square == i) {
            cout << i << " ";
            number++;
        }
    }

    if (number == 0)
        cout << "INVALID RANGE" << endl;
}
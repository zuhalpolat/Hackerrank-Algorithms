#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong

    int arranges = 0;


    cout << std::any_of(password.begin(), password.end(), ::isdigit) << endl;

    if (!std::any_of(password.begin(), password.end(), ::isdigit))
        arranges++;
    cout << std::any_of(password.begin(), password.end(), ::islower) << endl;


    if (!std::any_of(password.begin(), password.end(), ::islower))
        arranges++;

    cout << std::any_of(password.begin(), password.end(), ::isupper) << endl;

    if (!std::any_of(password.begin(), password.end(), ::isupper))
        arranges++;

    if (password.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_") == std::string::npos)
        arranges++;

    cout << arranges << endl;

    if (n < 6) {

        return (6 - n > arranges) ? 6 - n : arranges;
    }

    return arranges;
}

int main()
{

    int answer = minimumNumber(11, "#HackerRank");

    return 0;
}
